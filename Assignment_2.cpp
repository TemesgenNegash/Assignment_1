// Assignment_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
	string itemName;
	int quantity;
	float cost;

	cout << "Enter item name: ";
	cin >> itemName;

	cout << "Enter quantity: ";
	cin >> quantity;

	cout << "Enter unit cost: $";
	cin >> cost;

	float totalCost = quantity * cost;

	cout << "Total cost for " << itemName << ": $" << totalCost << endl;
	return 0;

}
/*Enter item name: gas
Enter quantity: 2
Enter unit cost: $34
Total cost for gas: $68

C:\CIS-25\Assignment_2\Assignment_2\x64\Debug\Assignment_2.exe (process 17776) exited with code 0 (0x0).
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
