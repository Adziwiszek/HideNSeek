#pragma once

#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Player : public GameObject {
public:
        Player(sf::Vector2f const _position);
        ~Player() override = default;
        void render(sf::RenderWindow *window) override;
        void onClick() override;
        void processInput() override;
        void update(float dt) override;

private:
        float speed;  
        sf::Vector2f direction;
};
