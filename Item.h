//
// Created by mgzeg on 2/19/2025.
//

#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <map>

class Item {
public:
    Item(const std::string &name,
         const std::string &description,
         const std::map<std::string, int> &properties,
         double price);

     [[nodiscard]] std::string getName() const;

     [[nodiscard]] std::string getDescription() const;

     [[nodiscard]] std::map<std::string, int> getProperties() const;

     [[nodiscard]] double getPrice() const;

private:
    std::string name;
    std::string description;
    std::map<std::string, int> properties; // Key,value , Defense, 100
    double price;
};


#endif //ITEM_H
