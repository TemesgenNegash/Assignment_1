// Assignment_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "---- Inventory Menu ----\n";
    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    if (choice) {
        switch (choice) {
        case 1:
            cout << "Item added!\n";
            break;
        case 2:
            cout << "showing items...\n";
            break;
        case 3:
            cout << "exiting...\n";
            break;
        default:
            cout << "Invalid option selected.\n";
        }
    }

    return 0;
}
/*---- Inventory Menu ----
1. Add Item
2. View Items
3. Exit
Choose an option: 4
Invalid option selected.

C:\CIS-25\Assignment_3\Assignment_3\x64\Debug\Assignment_3.exe (process 7868) exited with code 0 (0x0).
Press any key to close this window . . .
*/





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
