//
// Created by Diego Seabra on 20/03/2021.
//

#ifndef MAGICK_GLFW_CORE_H
#define MAGICK_GLFW_CORE_H

#pragma once

#include <GLFW/glfw3.h>
#include "config.h"

namespace Core
{
    int init(Config &config);
    void setIcon();
    bool shouldClose();
    void update();
    void shutdown();
}

#endif //MAGICK_GLFW_CORE_H
