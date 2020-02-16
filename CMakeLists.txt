cmake_minimum_required(VERSION 3.8)

project(rasterizer)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")

find_package(OpenCV REQUIRED)
add_executable(rasterizer main.cpp)

target_link_libraries(rasterizer PUBLIC ${OpenCV_LIBS})