#include "../headers/Player.h"
#include <iostream>
#include <SFML/Graphics.hpp>

Player::Player(sf::Vector2f const _position) : GameObject() {
    position = _position;
    direction = sf::Vector2f(0, 0);
    speed = 1;
}

void Player::render(sf::RenderWindow *window) {
    sf::CircleShape temp(50.f);

    temp.setPosition(position);
    temp.setFillColor(sf::Color(100, 250, 50));
    window->draw(temp);
}

void Player::onClick() {

}

void Player::processInput() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        direction.x = -1;
    else
        direction.x = 0;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        direction.x = 1;
    else
        direction.x = 0;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        direction.y = -1;
    else
        direction.y = 0;
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        direction.y = 1;
    else
        direction.y = 0;
}

void Player::update(float dt) {
    position += dt * speed * direction;
}
