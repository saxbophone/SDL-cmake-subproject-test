cmake_minimum_required(VERSION 3.0)

project(test-git-submodule LANGUAGES CXX)

add_subdirectory(SDL EXCLUDE_FROM_ALL)

add_executable(test ${CMAKE_SOURCE_DIR}/../demo.cpp)

target_link_libraries(test SDL2::SDL2-static)
