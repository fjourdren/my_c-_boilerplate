## Windows Usage with MinGW

Download and install MinGW from MinGW-w64 or through a package manager like MSYS2.
Make sure mingw32-make.exe is in your system's PATH and rename it to make.exe if needed.

```
mkdir build
cd build
cmake -DCMAKE_CXX_COMPILER=C:/MinGW/bin/g++.exe -DCMAKE_C_COMPILER=C:/MinGW/bin/gcc.exe -G "MinGW Makefiles" -S . -B build
cmake --build build # like "make" command
```
