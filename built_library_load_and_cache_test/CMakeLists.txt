cmake_minimum_required(VERSION 3.13)

project(built_library_load_and_cache_test CXX)
find_package( OpenCV REQUIRED )
message(STATUS "opencv include path '${OpenCV_INCLUDE_DIRS}'")
message(STATUS "opencv library are '${OpenCV_LIBS}'")

add_compile_options(-std=c++20 -O0 -Wall)

##OpenCV関係のインクルードディレクトリのパスを設定
target_include_directories(
    ${BOOST_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS}
)


add_executable(opencv_loadtest.out opencv/main.cpp)
add_executable(boost_loadtest.out boost/main.cpp)
target_link_libraries(opencv_loadtest.out ${OpenCV_LIBS})
target_link_libraries(boost_loadtest.out ${Boost_LIBS})


