## Windows Usage with MinGW

```
mkdir build
cd build
cmake -DCMAKE_CXX_COMPILER=C:/MinGW/bin/g++.exe -DCMAKE_C_COMPILER=C:/MinGW/bin/gcc.exe -G "MinGW Makefiles" ..
make
```
