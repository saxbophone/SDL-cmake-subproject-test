cmake_minimum_required(VERSION 3.0)

project(test-find-package LANGUAGES CXX)

find_package(SDL2 2.0.14 REQUIRED)

add_executable(test ${CMAKE_SOURCE_DIR}/../demo.cpp)

target_link_libraries(test SDL2::SDL2-static)
