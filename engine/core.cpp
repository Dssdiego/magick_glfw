//
// Created by Diego Seabra on 20/03/2021.
//

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif

#define STB_IMAGE_IMPLEMENTATION

#include <iostream>
#include "core.h"
#include "../libs/stb_image/stb_image.h"

GLFWwindow *window;
GLFWimage images[1];

int Core::init(Config &config)
{
    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(config.width, config.height, config.title.c_str(), nullptr, nullptr);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    setIcon();

    glfwMakeContextCurrent(window);

    return 0;
}

void Core::update()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void Core::shutdown()
{
    glfwTerminate();
}

bool Core::shouldClose()
{
    return glfwWindowShouldClose(window);
}

void Core::setIcon()
{
    auto gameIcon = stbi_load("assets/game_icon.png", &images[0].width, &images[0].height, nullptr, 4);

    if (gameIcon != nullptr)
        images[0].pixels = gameIcon;
    else
    {
        auto engineIcon = stbi_load("assets/engine_icon.png", &images[0].width, &images[0].height, nullptr, 4);
        images[0].pixels = engineIcon;
    }

    glfwSetWindowIcon(window, 1, images);
    stbi_image_free(images[0].pixels);
}
