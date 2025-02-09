cmake_minimum_required(VERSION 3.30)
# set(CMAKE_C_COMPILER "/opt/homebrew/Cellar/llvm/19.1.7/bin/clang")
# set(CMAKE_CXX_COMPILER "/opt/homebrew/Cellar/llvm/19.1.7/bin/clang++")
project(Arrays)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
add_library(MyVector
    src/my_vector.cpp
)

target_include_directories(MyVector
    PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_subdirectory(tests)
