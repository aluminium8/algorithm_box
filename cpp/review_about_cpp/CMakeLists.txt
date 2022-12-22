cmake_minimum_required(VERSION 3.13)

project(review_about_cpp CXX)
find_package( OpenCV REQUIRED )
message(STATUS "opencv include path is '${OpenCV_INCLUDE_DIRS}'")
message(STATUS "opencv library path is '${OpenCV_LIBS}'")

add_compile_options(-std=c++20 -O0 -Wall)
add_executable(cpp_random_test.out cpp_random_test/main.cpp)

