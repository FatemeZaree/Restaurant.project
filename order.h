#ifndef ORDER_H
#define ORDER_H

#include "menu.h"

class Order {
private:
    MenuItem orderList[20];
    int count;
public:
    Order();
    void addItem(Menu &menu, int id);
    void showOrder();
};

#endif
