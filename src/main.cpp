#include <SFML/Graphics.hpp>
#include "../headers/GameController.h"

int main()
{
    auto game_controller = GameController();

    game_controller.init(sf::VideoMode(800, 600), "Online framework!");
    game_controller.run();
}
