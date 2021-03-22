# Minimum cmake
cmake_minimum_required(VERSION 3.17)

# Project name
project(magick_glfw)

# C++ 20 standard
set(CMAKE_CXX_STANDARD 20)

# To create Windows standalone application
# TODO: Implement only on release
#if (WIN32)
#    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
#endif ()

# GLFW
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(libs/glfw-3.3.3)

# Find OpenGL
find_package(OpenGL REQUIRED)

# Image Loader
add_subdirectory(libs/stb_image)

# Make executable
add_executable(magick_glfw
        main.cpp
        engine/config.h
        engine/core.cpp
        engine/core.h
        game/game.cpp
        game/game.h
        engine/input.cpp
        engine/input.h
        engine/input_defs.h
        libs/stb_image/stb_image.h
        )

# Link target
target_link_libraries(magick_glfw glfw OpenGL::GL)

# Copy the assets folder to the build folder (post-build)
add_custom_command(TARGET magick_glfw POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        ${CMAKE_SOURCE_DIR}/assets
        ${PROJECT_BINARY_DIR}/assets
        COMMENT "Copy resources to build tree")