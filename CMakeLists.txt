cmake_minimum_required(VERSION 3.29)
project(MyRHI)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Vulkan REQUIRED)

set(source_file src/main.cpp src/MDirectXDevice.cpp)
set(include_file include/mrhi/MDirectXDevice.h)

add_library(MyRHI ${include_file} ${source_file})

target_include_directories(MyRHI PUBLIC include)

