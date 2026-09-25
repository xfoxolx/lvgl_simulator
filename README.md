<div align="center">

# 🎨 LVGL Simulator

**基于 LVGL + SDL2 的跨平台桌面模拟器**

在 PC 上快速开发、调试和预览 LVGL 界面。

[![CMake](https://img.shields.io/badge/build-CMake-064F8C?logo=cmake&logoColor=white)](https://cmake.org/)
[![LVGL](https://img.shields.io/badge/LVGL-v9-3B82F6)](https://lvgl.io/)
[![SDL2](https://img.shields.io/badge/SDL2-2.x-1D4ED8)](https://www.libsdl.org/)
[![License](https://img.shields.io/badge/license-see%20dependencies-lightgrey)](#许可证)

</div>

---

## ✨ 特性

- 🖥️ 支持 Linux、macOS 和 Windows
- ⚡ 使用 CMake 构建
- 🧩 LVGL 通过 Git 子模块管理
- 🎮 使用 SDL2 提供窗口、键盘和鼠标支持
- 🎛️ `app/` 写业务 UI 与事件，`common/` 放可复用样式组件

## 📦 依赖

|        系统        | 安装命令                                             |
| :----------------: | ---------------------------------------------------- |
| 🐧 Ubuntu / Debian | `sudo apt install build-essential cmake libsdl2-dev` |
|   🐧 Arch Linux    | `sudo pacman -S --needed base-devel cmake sdl2`      |
|      🍎 macOS      | `brew install cmake sdl2`                            |
|     🪟 Windows     | [MSYS2 MinGW-w64](https://www.msys2.org/)            |

## 🚀 获取源码

```bash
git clone --recurse-submodules git@github.com:xfoxolx/lvgl_simulator.git
cd lvgl_simulator
```

若 `lvgl/` 目录为空：

```bash
git submodule update --init --recursive
```

## 🔨 编译与运行

### 🐧 Linux

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j"$(nproc)"
./build/main
```

### 🍎 macOS

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build -j"$(sysctl -n hw.ncpu)"
./build/main
```

### 🪟 Windows（MSYS2 MinGW-w64）

打开 **MSYS2 UCRT64** 终端：

```bash
pacman -Syu
pacman -S --needed \
  mingw-w64-ucrt-x86_64-toolchain \
  mingw-w64-ucrt-x86_64-cmake \
  mingw-w64-ucrt-x86_64-ninja \
  mingw-w64-ucrt-x86_64-SDL2
```

编译并运行：

```bash
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/main.exe
```

## ⚙️ 常用选项

Debug 构建：

```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build
```

启用额外功能：

```bash
cmake -S . -B build \
  -DLV_USE_DRAW_SDL=ON \
  -DLV_USE_LIBPNG=ON \
  -DLV_USE_FREETYPE=ON
```

修改 `lv_conf.h` 后，建议删除 `build/` 目录再重新配置：

```bash
rm -rf build
cmake -S . -B build
cmake --build build
```

## 📄 许可证

本项目及其依赖使用各自源码目录中的许可证。LVGL 和 SDL2 的许可协议请以对应上游项目为准。

<div align="center">

**Enjoy building with LVGL! 💙**

</div>
