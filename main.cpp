#include <iostream>
#include "Item.h"
#include <map>
#include <vector>
#include "PlayerInfo.h"
using namespace std;


int main() {

    std::vector<Item> items; // dinaminis masyvas

    std::map<std::string, int> weaponProps;
    weaponProps["defense"] = 30;
    weaponProps["attack"] = 10;
    Item weapon("Sword", "Light Sword", weaponProps, 50);
    Item shield("Shield", "Light Sword", weaponProps, 50);
    //
    items.emplace_back(weapon);
    items.emplace_back(shield);
    items.emplace_back(weapon);
    items.emplace_back(shield);


    for (const auto& item: items)
        PlayerInfo::displayItemInfo(item);






    return 0;
}
