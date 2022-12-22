cmake_minimum_required(VERSION 3.13)

project(review_about_cpp CXX)
#find_package( OpenCV REQUIRED )
add_compile_options(-std=c++20 -O0 -Wall)
add_executable(cpp_random_test.out cpp_random_test/main.cpp)

