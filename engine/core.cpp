//
// Created by Diego Seabra on 20/03/2021.
//

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif

#include "core.h"

GLFWwindow *window;

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
