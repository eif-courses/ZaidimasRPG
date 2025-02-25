#include <iostream>
#include "Item.h"
#include <map>
#include <vector>
#include "PlayerInfo.h"
#include "Enums.h"
using namespace std;


std::vector<Item> items; // dinaminis masyvas


void createItem(
    const ItemTypes &type,
    const std::map<string, int> &weaponProps,
    string description) {
    Item weapon(type, description, weaponProps, 50);
    items.emplace_back(weapon);
}

void displayItems() {
    for (const auto &item: items)
        PlayerInfo::displayItemInfo(item);
}


void createItemUI(string enteredText, int selectedMenuItem) {
    cout << "Enter item type:" << endl;
    cin >> selectedMenuItem;
    ItemTypes inputType = static_cast<ItemTypes>(selectedMenuItem);

    cin.ignore();

    cout << "Enter item description:" << endl;

    getline(cin, enteredText);

    string propName;
    int propValue;
    int propsMenu = -1;
    std::map<std::string, int> weaponProps;

    while (propsMenu != 0) {
        cout << "Enter add more or exit" << endl;
        cin >> propsMenu;
        if (propsMenu != 0) {
            cout << "Enter prop name: " << endl;
            cin >> propName;
            cout << "Enter pro11p value: " << endl;
            cin >> propValue;
            weaponProps[propName] = propValue;
        }
    }

    createItem(inputType, weaponProps, enteredText);
    displayItems();
}


int main() {
    int selectedMenuItem = -1;
    string enteredText;

    while (selectedMenuItem != 0) {
        cout << endl << "Welcome to Marker RPG" << endl;
        cout << endl << "Select an option:" << endl;
        cout << endl << "1. Create an item" << endl;
        cout << endl << "2. Display items" << endl;
        cout << endl << "3. Exit" << endl;
        cin >> selectedMenuItem;

        switch (selectedMenuItem) {
            case 1:
                createItemUI(enteredText, selectedMenuItem);
                break;
            case 2:
                displayItems();
                break;
            case 0:
                cout << "viso gero";
                break;
            default:
                cout << "Invalid option." << endl;
                break;
        }
    }


    return 0;
}
