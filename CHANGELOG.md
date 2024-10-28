# **Metamod-r** Changelog

**Metamod-r** is based on the original version of [Metamod](http://metamod.org/) written by _Will Day_ for Half-Life 1 with some improvements from [Jussi Kivilinna](https://github.com/jkivilin) ([Metamod-p](https://github.com/jkivilin/metamod-p)). This product contains numerous performance optimizations and cleaner code. The core was rewritten with a JIT compiler.

`*` Original changelog [here](https://github.com/Bots-United/metamod-p/blob/master/doc/Changelog).

---

## [`1.3.0.149`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.149) - 2024-04-23

### Fixed
- Fixed shutdown issue

**Full Changelog**: [1.3.0.138...1.3.0.149](https://github.com/rehlds/metamod-r/compare/1.3.0.138...1.3.0.149)

## [`1.3.0.138`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.138) - 2023-11-28

### Changed
- Improved ReHLDS API initialization.

### Fixed
- HLDS compatibility
- [Fixed](https://github.com/rehlds/metamod-r/commit/ec926a611f4d225bb433609bf827269ad8482618) gracefully shuts down Metamod and plugins when the game is closing (now the _restart command works properly).

**Full Changelog**: [1.3.0.131...1.3.0.138](https://github.com/rehlds/metamod-r/compare/1.3.0.131...1.3.0.138)

## [`1.3.0.131`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.131) - 2018-08-24

### Changed
- Updated `C++ Intel Compiler` version `17.0` > `19.0`.

**Full Changelog**: [1.3.0.128...1.3.0.131](https://github.com/rehlds/metamod-r/compare/1.3.0.128...1.3.0.131)

## [`1.3.0.128`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.128) - 2018-08-24

### Fixed
- [Fixed](https://github.com/rehlds/metamod-r/commit/0cf2f709dbeae18ca84d2fafd4481ffbba06ad0c) two bugs in `jit`.

**Full Changelog**: [1.3.0.126...1.3.0.128](https://github.com/rehlds/metamod-r/compare/1.3.0.126...1.3.0.128)

## [`1.3.0.126`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.126) - 2018-05-10

### Fixed
- [Fixed](https://github.com/rehlds/metamod-r/commit/93b5bd45e279aad6a91e71504dd8deaf9896ab42) crashes in `pfnAlertMessage`.

**Full Changelog**: [1.3.0.125...1.3.0.126](https://github.com/rehlds/metamod-r/compare/1.3.0.125...1.3.0.126)

## [`1.3.0.125`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.125) - 2018-04-30

### Fixed
- [Fixed](https://github.com/rehlds/metamod-r/commit/6456c5f7ec872cd98d9be964440cf96780899558#diff-f15b77cc15bf608d761260093dfe8e0d) binary names to correctly auto-detect games.

**Full Changelog**: [1.3.0.119...1.3.0.125](https://github.com/rehlds/metamod-r/compare/1.3.0.119...1.3.0.125)

## [`1.3.0.119`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.119) - 2018-03-12

### Added
- Added support for various gamedll binaries for mods.
- Added `mm_pluginsfile` option.

**Full Changelog**: [1.3.0.107...1.3.0.119](https://github.com/rehlds/metamod-r/compare/1.3.0.107...1.3.0.119)

## [`1.3.0.107`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.107) - 2018-01-29

### Fixed
- Fixed problems with API functions returning float.

### Added
- [Added](https://github.com/rehlds/metamod-r/commit/132cbad0099c9903123d7ff7c3e1c13344efb3c9) support for more games.

### Changed
- Refactored code.

**Full Changelog**: [1.3.0.86...1.3.0.107](https://github.com/rehlds/metamod-r/compare/1.3.0.86...1.3.0.107)

## [`1.3.0.86`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.86) - 2017-11-15

### Fixed
- [Fixed crash](https://github.com/rehlds/metamod-r/commit/5b7fe147231df9354a8fe29c3852bd1db8119e81) and reworked `find_memloc`.

**Full Changelog**: [1.3.0.85...1.3.0.86](https://github.com/rehlds/metamod-r/compare/1.3.0.85...1.3.0.86)

## [`1.3.0.85`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.85) - 2017-11-15

### Fixed
- Fixed parse plugins.ini (loads the plugins for an appropriate platform only).
- Fixed crash for meta-plugins using UPX.

**Full Changelog**: [1.3.0.84...1.3.0.85](https://github.com/rehlds/metamod-r/compare/1.3.0.84...1.3.0.85)

## [`1.3.0.84`](https://github.com/rehlds/metamod-r/releases/tag/1.3.0.84) - 2017-10-27

### Added
- First public release.

### Changed
- Minor refactoring.

## `0.0.0.0` (based on `1.20p35`) - 2016-07-04

### Added
- Started `metamod-r` project by forking from `metamod-p`. Based on version `1.20p35`.
- The official changelog of the original version is missing.
