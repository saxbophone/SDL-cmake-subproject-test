cmake_minimum_required(VERSION 3.11)

project(test-FetchContent LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
    SDL2
    GIT_REPOSITORY https://github.com/saxbophone/SDL.git
    GIT_TAG main
)

set(SDL_TEST OFF)
set(SDL_SHARED OFF)
set(SDL_STATIC ON)

FetchContent_MakeAvailable(SDL2)

add_executable(demo ${CMAKE_SOURCE_DIR}/../demo.cpp)

target_link_libraries(demo SDL2-static)

enable_testing()

add_test(NAME verify-working COMMAND demo)
