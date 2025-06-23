// Assignment_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
void showMenu();
void addItem();
void viewItems();

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
        case 1:
            addItem();
            break;
        case 2:
            viewItems();
            break;
        case 3:
            cout << "exiting...\n";
            break;
        default:
            cout << "Invalid option selected.\n";
        }

    } while (choice != 3);

    return 0;
}

void showMenu() {
    cout << "---- Inventory Menu ----\n";
    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
}

void addItem() {
    cout << "Item added!\n";
}

void viewItems() {
    cout << "showing items...\n";
}
/*---- Inventory Menu ----
1. Add Item
2. View Items
3. Exit
Choose an option: 1
Item added!
---- Inventory Menu ----
1. Add Item
2. View Items
3. Exit
Choose an option: 2
showing items...
---- Inventory Menu ----
1. Add Item
2. View Items
3. Exit
Choose an option: 4
Invalid option selected.
---- Inventory Menu ----
1. Add Item
2. View Items
3. Exit
Choose an option: 3
exiting...

C:\CIS-25\Assignment_4\Assignment_4\x64\Debug\Assignment_4.exe (process 16412) exited with code 0 (0x0).
Press any key to close this window . . .*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
