cmake_minimum_required(VERSION 3.0)

project(test-find-package LANGUAGES CXX)

find_package(SDL2 2.0.14 REQUIRED)

add_executable(demo ${CMAKE_SOURCE_DIR}/../demo.cpp)

target_link_libraries(demo SDL2-static)

enable_testing()

add_test(NAME verify-working COMMAND demo)
