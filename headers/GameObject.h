#pragma once

#include <SFML/Graphics.hpp>

class GameObject {
public:
    GameObject() {};
    virtual void render(sf::RenderWindow *window) {};
    virtual void onClick() {};
    virtual void processInput() {};
    virtual void update(float dt) {};
    virtual ~GameObject() = default;

protected:
    sf::Vector2f position;
};

