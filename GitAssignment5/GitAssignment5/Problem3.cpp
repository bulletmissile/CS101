// Stefan Beeli
// CS 1
// Assignment 5 Problem 3
// Write a program that prints a diamond based on a size entered by the user.
// The size must be an odd number.If the size is even, the program will
// increment the size by one.

#include <iostream>
using namespace std;
int main()
{
	int diamondSize = 0;
	
	cout << "------Diamond Printer---------" << endl;
	cout << "  I will print out a diamond  " << endl; 
	cout << "  Enter a number for the size:" << endl;

	cin >> diamondSize;
	cout << "You Entered : " << diamondSize << endl;

	if (diamondSize % 2 == 0) 
	{ 
		diamondSize++; 
		cout << "Diamond size must be odd using: " << diamondSize << endl;
	}

	for (int i = 0; i < diamondSize; i++)
	{
		for (int a = 0; a < diamondSize; a++)
		{
			cout << ' ';
			if (a == i) { cout << '*'; }
		}
		cout << endl;
	}
	
	return 0;
}
