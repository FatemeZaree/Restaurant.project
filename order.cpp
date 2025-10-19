#include "order.h"
#include <iostream>
using namespace std;

Order::Order() {
    count = 0;
}

void Order::addItem(Menu &menu, int id) {
    MenuItem item = menu.getItem(id);
    if (item.id != 0) {
        orderList[count] = item;
        count++;
        cout << item.name << " added to order." << endl;
    } else {
        cout << "Invalid item number!" << endl;
    }
}

void Order::showOrder() {
    cout << "\n--- Your Order ---" << endl;
    int total = 0;
    for (int i = 0; i < count; i++) {
        cout << orderList[i].name << " - " 
             << orderList[i].price << " Toman" << endl;
        total += orderList[i].price;
    }
    cout << "Total: " << total << " Toman" << endl;
}
