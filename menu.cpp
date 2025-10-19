#include "menu.h"
#include <iostream>
using namespace std;

Menu::Menu() {
    items[0] = {1, "Pizza", 150000};
    items[1] = {2, "Burger", 120000};
    items[2] = {3, "Salad", 80000};
    items[3] = {4, "Soda", 30000};
    items[4] = {5, "Fries", 50000};
}

void Menu::showMenu() {
    cout << "\n--- Restaurant Menu ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << items[i].id << ". " << items[i].name 
             << " - " << items[i].price << " Toman" << endl;
    }
}

MenuItem Menu::getItem(int id) {
    for (int i = 0; i < 5; i++) {
        if (items[i].id == id) {
            return items[i];
        }
    }
    return {0, "Invalid", 0};
}
