//
// Created by mgzeg on 2/19/2025.
//

#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <map>
#include "Enums.h"
class Item {
public:
    Item(const ItemTypes& type,
         const std::string &description,
         const std::map<std::string, int> &properties,
         double price);

    ItemTypes getItemType() const;

     [[nodiscard]] std::string getDescription() const;

     [[nodiscard]] std::map<std::string, int> getProperties() const;

     [[nodiscard]] double getPrice() const;

private:
    ItemTypes type;
    std::string description;
    std::map<std::string, int> properties; // Key,value , Defense, 100
    double price;
};


#endif //ITEM_H
