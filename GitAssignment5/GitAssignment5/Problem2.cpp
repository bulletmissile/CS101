// Stefan Beeli
// CS 1
// Assignment 5 Problem 2
//	Fibonacci numbers are a sequence of numbers where each number is represented by the sum of
//	the two preceding numbers, starting with 0 and 1:
//	0, 1, 1, 2, 3, 5, 8, etc.
//	Write a program that prompts the user for a positive integer and prints out whether or not that
//	integer is a Fibonacci number.
//	The program terminates when
//	- 1 is entered.
//
//	Create a method with the following signature. bool isFibonacci(int number)
//	The method tests whether the number passed to it
//	is a Fibonacci number or not.It returns
//	true if the number is indeed a Fibonacci number and it
//	returns false otherwise.


#include <iostream>
#include <string>

using namespace std;


bool isFibonacci(int number)
{
	int num1 = 0, num2 = 1, numMax = 0;

	while (numMax < number)
	{
		numMax = num1 + num2;
		num1 = num2;
		num2 = numMax;
	}

	if (numMax == number)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main2()
{
	int numTest=0;
	
	while(numTest != -1)
	{
		// Get number to test if it's Fibonacci 
		cout << "Enter integer to check if a Fibonacci Number (or -1 to end) :";
		cin >> numTest;
	
		// Check if the number entered is a Fibonacci Number
		if (isFibonacci(numTest))
		{
			cout << "Congrats, " << numTest << " Is a Fibonacci number " << endl;
		}
		else
		{
			cout << "Sorry, " << numTest << " Is not a Fibonacci number " << endl;
		}
	}

	return 0;
}