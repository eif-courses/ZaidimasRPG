#include <iostream>
#include "Item.h"
#include <map>
#include <vector>
#include "PlayerInfo.h"
#include "Enums.h"
using namespace std;




std::vector<Item> items; // dinaminis masyvas


void createItem(ItemTypes type, string name, string description) {

    std::map<std::string, int> weaponProps;
    weaponProps["defense"] = 30;
    weaponProps["attack"] = 10;

    Item weapon(type, "Light Sword", weaponProps, 50);
    items.emplace_back(weapon);
    for (const auto& item: items)
        PlayerInfo::displayItemInfo(item);
}

int main() {

















    return 0;
}
