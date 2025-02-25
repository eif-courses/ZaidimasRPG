//
// Created by mgzeg on 2/19/2025.
//

#include "PlayerInfo.h"
#include <iostream>
using namespace std;

void PlayerInfo::displayItemInfo(const Item& item){
    cout << "-----------ITEM NAME-----------------" << endl;
    cout << item.getName() << endl;
    cout << "-------------------------------------" << endl;
    cout << "-------------DESCRIPTION-----------------" << endl;
    cout << item.getDescription() << endl;
    cout << "-------------------------------------" << endl;
    cout << "--------------PROPS-----------------" << endl;
    for (const auto& it: item.getProperties())
        cout << it.first << ": " << it.second << endl;
    cout << "-------------------------------------" << endl;
}
