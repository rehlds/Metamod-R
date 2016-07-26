#include "precompiled.h"

META_ERRNO meta_errno;

void do_exit(int exitval)
{
	sleep(3);
	exit(exitval);
}

// Checks for a non-empty file, relative to the gamedir if necessary.
// Formerly used LOAD_FILE_FOR_ME, which provided a simple way to check for
// a file under the gamedir, but which would _also_ look in the sibling
// "valve" directory, thus sometimes finding files that weren't desired.
// Also, formerly named just "valid_file".
//
// Special-case-recognize "/dev/null" as a valid file.
int valid_gamedir_file(const char *path)
{
	char buf[PATH_MAX];
	struct stat st;
	int ret, reg, size;

	if (!path)
		return FALSE;

	if (!Q_strcmp(path, "/dev/null"))
		return TRUE;

	if (is_absolute_path(path))
	{
		Q_strncpy(buf, path, sizeof(buf) - 1);
		buf[sizeof(buf) - 1] = '\0';
	}
	else
		safevoid_snprintf(buf, sizeof(buf), "%s/%s", GameDLL.gamedir, path);

	ret = stat(buf, &st);
	if (ret != 0)
	{
		META_DEBUG(5, ("Unable to stat '%s': %s", buf, strerror(errno)));
		return FALSE;
	}

	reg = S_ISREG(st.st_mode);
	if (!reg)
	{
		META_DEBUG(5, ("Not a regular file: %s", buf));
		return FALSE;
	}

	size = st.st_size;
	if (!size)
	{
		META_DEBUG(5, ("Empty file: %s", buf));
		return FALSE;
	}

	if (ret == 0 && reg && size)
		return TRUE;
	else
		return FALSE;
}

// Turns path into a full path:
//  - if not absolute, prepends gamedir
//  - calls realpath() to collapse ".." and such
//  - calls normalize_pathname() to fix backslashes, etc
//
// Much like realpath, buffer pointed to by fullpath is assumed to be
// able to store a string of PATH_MAX length.
char *full_gamedir_path(const char *path, char *fullpath) {
	char buf[PATH_MAX];

	// Build pathname from filename, plus gamedir if relative path.
	if (is_absolute_path(path))
	{
		Q_strncpy(buf, path, sizeof(buf) - 1);
		buf[sizeof(buf) - 1] = '\0';
	}
	else
		safevoid_snprintf(buf, sizeof(buf), "%s/%s", GameDLL.gamedir, path);

	// Remove relative path components, if possible.
	if (!realpath(buf, fullpath))
	{
		META_DEBUG(4, ("Unable to get realpath for '%s': %s", buf, str_os_error()));

		Q_strncpy(fullpath, path, sizeof(fullpath) - 1);
		fullpath[sizeof(fullpath) - 1] = '\0';
	}
	// Replace backslashes, etc.
	normalize_pathname(fullpath);
	return fullpath;
}