#ifndef MENU_H
#define MENU_H

#include <string>
using namespace std;

struct MenuItem {
    int id;
    string name;
    int price;
};

class Menu {
private:
    MenuItem items[5];
public:
    Menu();
    void showMenu();
    MenuItem getItem(int id);
};

#endif
