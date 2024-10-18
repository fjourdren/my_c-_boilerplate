cmake_minimum_required(VERSION 3.25)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 11)            # Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD_REQUIRED ON)   # Make it mandatory
set(CMAKE_CXX_EXTENSIONS OFF)         # Disable compiler-specific extensions (optional)

# Recursively get all source files (cpp) from the src directory and subdirectories
file(GLOB_RECURSE Hello_SOURCES src/*.cpp)
file(GLOB_RECURSE Hello_HEADERS include/*.hpp)

message("Source Files : " ${Hello_SOURCES})

# Add the executable for the hello world program
add_executable(HelloWorld ${Hello_SOURCES})
include_directories(include)
