# Building 

## PREREQUISITES
This project requires:
* [Cross-platform Make (CMake)](https://cmake.org/download/) v3.0.0+ 
* GCC or an alternative, reasonably conformant C++ compiler: [GCC - MinGW-w64](https://sourceforge.net/projects/mingw-w64/files/mingw-w64/mingw-w64-release/)

## Building with VCPKG and VsCode
* Install vcpkg (see Installing VCPKG section)
* Install [Visual Studio Code](https://code.visualstudio.com/)
* In .vccode/settings.json
    * Set the `VCPKG_TARGET_TRIPLET` to the desired triplet, normally `x64-windows`. All supported triplets can be viewed by executing `vcpkg help triplet` from your terminal
    * Set `CMAKE_TOOLCHAIN_FILE` value to the path of the VCPKG CMake tool chain file. This path can be found by executing `vcpkg integrate install` from your terminal
* Ensure that all vcpkg dependencies are installed and compatable with the target triplet selected above
* Install the `CMakeTools` extension from the Extensions pannel (Ctrl + Shift + x)
* Allow VsCode to configure the project by following the prompts
* Select the build kit you would like to use from the icon `No Kit Selected` on the bottom bar and select your prefered compiler
* Build the project by selecting the build botton on the bottom bar (Ctrl + F5 to debug)

## Building with VCPKG and Cmake
Get tool chain path from: `vcpkg integrate install`

```
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=<tool chain path> -DVCPKG_TARGET_TRIPLET=x64-windows
cmake --build .
```

cmake .. -DCMAKE_TOOLCHAIN_FILE=C:/Workspace/vcpkg/scripts/buildsystems/vcpkg.cmake -DVCPKG_TARGET_TRIPLET=x64-windows

## Building from terminal with local dependencies
Requires CMake and all dependencies to be installed. 

```
cd build
cmake ..
cmake --build .
```

## Debugging build:

### CMake Error: "sh found in path"
If you have `sh.exe` on your path CMake will be unable to execute. This commonly occurs when git bash has been installed on your system. You can resolve the error by renaming the sh.exe file.

### CMake Error: "dumpbin is not recognized" when building
`dumpbin : The term 'dumpbin' is not recognized as the name of a cmdlet`: this occurs if the build tool is not able to find the 'dumpbin' command. You can fix this by adding it to your path.

* ensure that Visual Studio has been installed
* open the `developer command prompt for VS` from start
* execute `which dumpbin`
* add the returned folder to your path

Alternatively selecting the Visual Studio compiler should resolve the issue.


# VCPKG 

## Installing VCPKG
* Install Visual Studio 2019 (include the `Desktop Development with C++` component)
* `git clone https://github.com/microsoft/vcpkg.git`
* `cd vcpkg`
* `.\bootstrap-vcpkg.bat`
* `.\vcpkg integrate install`

Lastly, for convenience, add the vcpkg folder to your PATH.

## Installing Dependencies
When installing a package you can select the target triplet by appending `:<triplet>` to the name of the package, eg: `vcpkg install sqlite3:x64-windows`

You can view a all supported triplets by executing `vcpkg help triplet` from your terminal. 

## Dependencies
Please execute the following:
`vcpkg install sqlite3:x64-windows`


