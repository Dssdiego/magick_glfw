#include <iostream>
#include "engine/config.h"
#include "engine/core.h"
#include "game/game.h"

int main()
{
    Config config = Config();
    config.title = "Pacman Clone";
    config.width = 800;
    config.height = 600;

    Core::init(config);
    Game::init();

    while (!Core::shouldClose())
    {
        Core::update();
        Game::update();

        Game::draw();
    }

    Game::shutdown();
    Core::shutdown();
}
