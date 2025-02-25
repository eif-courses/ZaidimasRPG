//
// Created by mgzeg on 2/19/2025.
//

#include "Player.h"


Player::Player(std::string name, int health, int points, int power) {
    this->name = name;
    this->health = health;
    this->power = power;
    this->points = points;
}

void Player::printName() {
    cout << "Name: " << name << endl;
}

void Player::changeName(string name) {
    cout << "Name: " << this->name << " changed to: " <<  name << endl;
    this->name = name;
}

void Player::setHealth(int health) {
    this->health = health;
}
