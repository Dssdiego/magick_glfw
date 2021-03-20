//
// Created by Diego Seabra on 20/03/2021.
//

#ifndef MAGICK_GLFW_GAME_H
#define MAGICK_GLFW_GAME_H

#pragma once

#include <GLFW/glfw3.h>
#include "../engine/config.h"

namespace Game
{
    int init(Config &config);
    bool shouldClose();
    void update();
    void shutdown();
}

#endif //MAGICK_GLFW_GAME_H
