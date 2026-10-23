#include "CustomItem.h"
#include <iomanip>
#include <sstream>


CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    if (size == "small") {
        price = 3.00;
    } else if (size == "medium") {
        price = 5.00;
    } else if (size == "large") {
        price = 6.50;
    }
}

CustomItem::~CustomItem() {}

void CustomItem::addTopping(std::string topping) {
    toppings[topping]++;
    price += 0.40;
}

double CustomItem::getPrice() {
    return price;
}

std::string CustomItem::composeItem() {
    std::ostringstream res;
    res << "Custom Size: " << size << "\n";
    res << "Toppings:\n";

    for (const auto& pair : toppings) {
        res << pair.first << ": " << pair.second << " oz\n";
    }

    res << std::fixed << std::setprecision(2);
    res << "Price: $" << getPrice() << "\n";

    return res.str();
}