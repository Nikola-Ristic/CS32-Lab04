#include "PreMadeItem.h"
#include <iomanip>
#include <sstream>

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name) {
    if (size == "small") {
        price = 4.00;
    } else if (size == "medium") {
        price = 6.00;
    } else if (size == "large") {
        price = 7.50;
    }
}

PreMadeItem::~PreMadeItem() {}

double PreMadeItem::getPrice() {
    return price;
}

std::string PreMadeItem::composeItem() {
    std::ostringstream res;
    res << "Pre-made Size: " << size << "\n";
    res << "Pre-made Item: " << name << "\n";
    res << std::fixed << std::setprecision(2);
    res << "Price: $" << getPrice() << "\n";

    return res.str();
}