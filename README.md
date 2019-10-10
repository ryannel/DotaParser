# PREREQUISITES
This project requires:
* Cross-platform Make (CMake) v2.6.2+
* GNU Make or equivalent.
* GCC or an alternative, reasonably conformant C++ compiler.

# Building 
```
cd build
cmake ..
cmake --build .
```

## Building with VCPKG and VsCode
Get tool chain path from: `vcpkg integrate install`

Set `CMAKE_TOOLCHAIN_FILE` value to the vcpkg tool chain path.

## Building with VCPKG and Cmake
Get tool chain path from: `vcpkg integrate install`

```
cmake .. -DCMAKE_TOOLCHAIN_FILE=<tool chain path> -DVCPKG_TARGET_TRIPLET=x64-windows
cmake --build .
```

# Install

## Windows 
```
./configure
make
make install
```

## Mac OS X / Linux
```
 ./configure
 make
 sudo make install
```