#include <SFML/Graphics.hpp>
#include "../headers/GameController.h"
#include "../headers/Player.h"

GameController::GameController() {
    std::cout << "created game conroller!" << std::endl;
}

GameController::~GameController() {
    for(auto obj: gameObjects) {
        delete obj;
    }
}

void GameController::init(sf::VideoMode const vm, std::string const name) {
    window.create(vm, name);
    p = new Player(sf::Vector2f(50.0f, 50.0f));
    gameObjects.push_back(p);
}

void GameController::run() {
    sf::Clock clock;
    sf::Time lastFrame, currentFrame = clock.getElapsedTime();
    float dt;
    while (window.isOpen())
    {
        dt = sf::Time(currentFrame - lastFrame).asMilliseconds();
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        p->processInput();
        p->update(dt);

        window.clear(sf::Color::Black);
        for(auto obj: gameObjects) {
            obj->render(&window);
        }
        window.display();
        lastFrame = currentFrame;
        currentFrame = clock.getElapsedTime();
    }
}
