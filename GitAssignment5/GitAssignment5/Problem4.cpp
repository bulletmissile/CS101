// Stefan Beeli
// CS 1
// Assignment 4 Problem 4
// Write a program that determines the season based on the month.The program prompts a user to
// enter a month(1 - 12) and then prints if that month is in spring,
// summer fall or winter.
//
// The program must also check if a valid month was entered.
// For simplicity, assume:
// 1 - 3 : spring
// 4 - 6 : summer
// 7 - 9 : fall
// 10 - 12 : winter.

#include <iostream>
#include <string>

using namespace std;

int main4()
{
	int month = 0;
	string season = "";

	cout << "Enter a month (1-12) : ";
	cin >> month;


	if ((month < 1) || (month > 12))
	{
		cout << month << " is not a valid month! \n";
	}
	else
	{
		if (month < 4)
		{
			season = "Spring";
		}
		else if (month < 7)
		{
			season = "Summer";
		}
		else if (month < 10)
		{
			season = "Fall";
		}
		else if (month < 13)
		{
			season = "Winter";
		}

		cout << "The " << month << " month is in the " << season << endl;
	}
	
	return 0;
}