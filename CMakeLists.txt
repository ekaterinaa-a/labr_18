cmake_minimum_required(VERSION 3.16)
project(Lab18Matrix LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab18Matrix
    src/main.cpp
    src/matrix_io.cpp
    src/math_utils.cpp
    src/matrix_processor.cpp
)

target_include_directories(Lab18Matrix PRIVATE include)
