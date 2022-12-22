cmake_minimum_required(VERSION 3.13)

project(built_library_load_and_cache_test CXX)
find_package( OpenCV REQUIRED )
message(STATUS "opencv include path '${OpenCV_INCLUDE_DIRS}'")
message(STATUS "opencv library are '${OpenCV_LIBS}'")

add_compile_options(-std=c++20 -O0 -Wall)
add_executable(opencv_loadtest.out opencv/main.cpp)

