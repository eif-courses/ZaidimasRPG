//
// Created by mgzeg on 2/19/2025.
//

#ifndef INVENTORY_H
#define INVENTORY_H
#include <map>
#include <vector>
#include <string>

#include "Item.h"
#include "Player.h"
#include "PlayerInfo.h"


class Inventory {
private:
    // nullptr
     Item items[10][10];
public:
    void addItem(Item item, int i, int j) {
        items[i][j] = item;
    }
    void displayItem(int i, int j) {
        if (items[i][j].getPrice() == 0) {
           return;
        }

        PlayerInfo::displayItemInfo(items[i][j]);
    }
};



#endif //INVENTORY_H
