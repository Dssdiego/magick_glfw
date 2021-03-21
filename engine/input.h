//
// Created by Diego Seabra on 20/03/2021.
//

#ifndef MAGICK_GLFW_INPUT_H
#define MAGICK_GLFW_INPUT_H

#include "input_defs.h"

namespace Input
{
    /* Keyboard */
    bool isKeyDown(Key key);
    bool isKeyUp(Key key);

    /* Gamepad */
    bool isButtonDown(Button button);
    bool isButtonUp(Button button);
//    bool onControllerConnect();
//    bool onControllerDisconnect();

    /* Mouse */
    bool isMouseButtonDown(MouseButton mouseButton);
    bool isMouseButtonUp(MouseButton mouseButton);
}

#endif //MAGICK_GLFW_INPUT_H
