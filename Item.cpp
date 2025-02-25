//
// Created by mgzeg on 2/19/2025.
//

#include "Item.h"


Item::Item(const ItemTypes &type, const std::string &description, const std::map<std::string, int> &properties,
       double price)
       : type(type),
         description(description),
         properties(properties),
         price(price) {
}


ItemTypes Item::getItemType() const {
    return type;
}

std::string Item::getDescription() const {

    return description;
}

std::map<std::string, int> Item::getProperties() const {
    return properties;
}

double Item::getPrice() const {
    return price;
}
