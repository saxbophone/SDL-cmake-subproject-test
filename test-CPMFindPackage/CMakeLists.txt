cmake_minimum_required(VERSION 3.15)

project(test-CPMFindPackage LANGUAGES CXX)

include(CPM.cmake)

CPMFindPackage(
    NAME SDL2
    GIT_REPOSITORY https://github.com/saxbophone/SDL.git
    GIT_TAG saxbophone/cmake-subproject-alias-targets
    VERSION 2.0.14
    # don't want a shared library nor unit tests in this case
    OPTIONS "SDL_TEST OFF" "SDL_SHARED OFF" "SDL_STATIC ON"
)

add_executable(demo ${CMAKE_SOURCE_DIR}/../demo.cpp)

target_link_libraries(demo SDL2::SDL2-static)

enable_testing()

add_test(NAME verify-working COMMAND demo)
