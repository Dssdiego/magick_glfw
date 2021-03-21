//
// Created by Diego Santos Seabra on 20/03/21.
//

#include <iostream>
#include "game.h"
#include "../engine/input.h"
#include "../engine/input_defs.h"

void Game::init()
{

}

void Game::update()
{
    if (Input::isKeyDown(Key::F12))
    {
        std::cout << "Apertou o F12. Tirar screenshot! :)" << std::endl;
    }

    if (Input::isKeyDown(Key::Left) || Input::isKeyDown(Key::A))
    {
        std::cout << "Apertou left ou A" << std::endl;
    }

    if (Input::isButtonDown(Button::A))
    {
        std::cout << "Apertou o A do controle" << std::endl;
    }

    if(Input::isMouseButtonDown(MouseButton::Left))
    {
        std::cout << "Clicou com o botão direito do mouse" << std::endl;
    }
}

void Game::draw()
{

}

void Game::shutdown()
{

}
