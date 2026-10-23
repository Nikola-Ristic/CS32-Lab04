#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"
#include <string>

class PreMadeItem : public IceCreamItem {
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();

    virtual std::string composeItem() override;
    virtual double getPrice() override;

private:
    std::string name;
};

#endif