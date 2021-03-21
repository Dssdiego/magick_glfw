# Minimum cmake
cmake_minimum_required(VERSION 3.17)

# Project name
project(magick_glfw)

# C++ 20 standard
set(CMAKE_CXX_STANDARD 20)

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(libs/glfw-3.3.3)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Make executable
add_executable(magick_glfw
        main.cpp
        engine/config.h
        engine/core.cpp
        engine/core.h
        game/game.cpp game/game.h)

# Link target
target_link_libraries(magick_glfw glfw OpenGL::GL)
