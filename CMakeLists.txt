cmake_minimum_required(VERSION 3.25)

project(Hello)

file(GLOB_RECURSE Hello_SOURCES src/*.cpp)
file(GLOB_RECURSE Hello_HEADERS include/*.hpp)

message("Source Files : " ${Hello_SOURCES})

include_directories(${Hello_HEADERS})
add_executable(Hello ${Hello_SOURCES})