//
// Created by mgzeg on 2/19/2025.
//

#include "Item.h"


Item::Item(const std::string &name, const std::string &description, const std::map<std::string, int> &properties,
       double price)
       : name(name),
         description(description),
         properties(properties),
         price(price) {
}

std::string Item::getName() const {
    return name;
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
