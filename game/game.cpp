//
// Created by Diego Seabra on 20/03/2021.
//

#include "game.h"

GLFWwindow *window;

int Game::init(Config &config)
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

void Game::update()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void Game::shutdown()
{
    glfwTerminate();
}

bool Game::shouldClose()
{
    return glfwWindowShouldClose(window);
}
