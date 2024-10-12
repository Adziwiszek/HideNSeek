#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "GameObject.h"
#include <vector>

class GameController {
public: 
    GameController();
    void init(sf::VideoMode const vm, std::string const name);
    void run(); // main loop
    ~GameController();
private:
    sf::RenderWindow window;
    std::vector<GameObject*> gameObjects;
    Player *p;
};
