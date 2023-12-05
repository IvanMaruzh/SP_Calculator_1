cmake_minimum_required(VERSION 3.0)

project(calculator VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(loader STATIC calculator.cpp)
add_executable(Lab_4 main.cpp)
target_link_libraries(Lab_4 PUBLIC loader)
