#include <iostream>
#include "engine/config.h"
#include "game/game.h"

int main()
{
    Config config = Config();
    config.title = "Pacman Clone";
    config.width = 800;
    config.height = 600;

    Game::init(config);

    while (!Game::shouldClose())
    {
        Game::update();
    }

    Game::shutdown();
}
