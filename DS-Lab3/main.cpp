/*
Nick Thoms
Data Structures 2020
Due: 2/25/2020
Lab 3: Stack
Description: This lab is an example of how a stack can be implemented using pointers to link items together.
*/

#include<iostream>
#include"stack.h"

using namespace std;

int main()
{
	stack stack1;

	cout << "Empty: " << stack1.isEmpty() << "\nFull:  " << stack1.isFull() << "\n";

	stack1.push(1);  // Items are put in the stack.
	stack1.push(2);
	stack1.push(3);
	cout << "\nStack created\n";

	while (stack1.isEmpty() == false) // The items in the stack are outputted along with checks for empty and full.
	{
		cout << "\nItem:  " << stack1.top() << endl;
		cout << "Empty: " << stack1.isEmpty() << "\nFull:  " << stack1.isFull() << "\n";
		stack1.pop() ;
	}

	cout << "\nEmpty: " << stack1.isEmpty() << "\nFull:  " << stack1.isFull() << "\n";

	stack1.push(1);
	stack1.push(2);   // Items are inserted again
	stack1.push(3);
	cout << "\nStack created\n\nTop item: " << stack1.top() << endl;

	stack1.~stack(); // Destructor is called to deallocate memory in the stack.
	cout << "\nStack deleted\n";

	cout << "\nEmpty: " << stack1.isEmpty() << "\nFull:  " << stack1.isFull() << "\n";
}

