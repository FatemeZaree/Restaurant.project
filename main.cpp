#include <iostream>
#include "menu.h"
#include "order.h"
using namespace std;

int main() {
    Menu menu;
    Order order;
    int choice;

    do {
        cout << "\n===== Restaurant Ordering System =====" << endl;
        cout << "1. Show Menu" << endl;
        cout << "2. Add Item to Order" << endl;
        cout << "3. Show Order" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                menu.showMenu();
                break;
            case 2: {
                int item;
                cout << "Enter item number: ";
                cin >> item;
                order.addItem(menu, item);
                break;
            }
            case 3:
                order.showOrder();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
