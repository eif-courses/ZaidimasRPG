
//
// Created by mgzeg on 2/19/2025.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
using namespace std;


class Player {
public:

    Player(std::string name, int health, int points, int power);

    void printName();
    void changeName(string name);

private:
    std::string name;
    int health;
    int points;
    int power;

    void setHealth(int health);

};



#endif //PLAYER_H
