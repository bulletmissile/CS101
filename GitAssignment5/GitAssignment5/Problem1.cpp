// Stefan Beeli
// CS 1
// Assignment 5 Problem 1
// Write a program that prints out a simulated candle of the entered size. 
// The program prompts the user for two positive int numberswhere the first
// number represents the candle and the second number represents the wick.
// Create a function that expects two parameters : one parameter called candleSize
// defines the size of the candle, and the second parameter called wickSize
// defines the size of the wick.The method then draws a candle with wick of
// the specified sizes.

// Example:
// Candle size : 8 
// Wick size : 2 
// Output : ========--

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main1()
{
	// 3/4/2018 sdb
	// Compute an invoice based on different types of tickets purchased.
	char packagePurchased = 'A';  // User Input package Level - default to A
	float minutesUsed = 0; // User Input Minutes
	float monthlyTotal = 0;  // total due amount
	float minutesCharge = 0;  // minutes charge

	const float taxRate = 0.0925;

	const float aMonthly = 39.99;
	const float bMonthly = 59.99;
	const float cMonthly = 69.99;

	const float aMinutesIncl = 450;
	const float bMinutesIncl = 900;
	const float cMinutesIncl = 0;

	const float aAddlMinPrice = .45;
	const float bAddlMinPrice = .40;
	const float cAddlMinPrice = .00;
	
	float packageMonthly = 0;
	float packageMinutesIncl = 0;
	float packageAddlMinPrice;

	
	// Get User choices
	cout << "Which Package has the Customer Purchased :";
	cin >> packagePurchased;
	
	switch (packagePurchased)
	{
		case 'a': 
		case 'A':
			packagePurchased = 'A';
			packageMonthly = aMonthly;
			packageMinutesIncl = aMinutesIncl;
			packageAddlMinPrice = aAddlMinPrice;
			break;
		case 'b':
		case 'B':
			packagePurchased = 'B';
			packageMonthly = bMonthly;
			packageMinutesIncl = bMinutesIncl;
			packageAddlMinPrice = bAddlMinPrice;
			break;
		case 'c':
		case 'C':
			packagePurchased = 'C';
			packageMonthly = cMonthly;
			packageMinutesIncl = cMinutesIncl;
			packageAddlMinPrice = cAddlMinPrice;
			break;
		default:
			cout << "Invalid Choice : " << packagePurchased << endl;
	}
	
	minutesUsed = 0;

	if (packagePurchased != 'C')
	{
		cout << "How many minutes have been used :" ;
		cin >> minutesUsed;
	};
	// Compute any minutes overage
	minutesCharge = 0;
	if (minutesUsed > packageMinutesIncl)
	{
		minutesCharge = (minutesUsed - packageMinutesIncl) * packageAddlMinPrice;
	}
	// Compute monthly Bill
	monthlyTotal = packageMonthly + minutesCharge;

	// Display Invoice -
	cout << setprecision(2) << fixed;
	cout << endl << endl;
	cout << "---Invoice for Plan " << packagePurchased << " -----------" << endl;

	cout << "Monthly Charge- plan " << packagePurchased << "   :  = $" << setw(8) << packageMonthly << endl;

	// If no minutes are being charged - don't show minutes details 
	if (minutesCharge != 0)
	{
		cout << "Plan includes " << packageMinutesIncl << " Minutes\n";
		cout << "Minutes over plan ("  << (minutesUsed - packageMinutesIncl) << ") @ " << packageAddlMinPrice << endl;
		cout << "Minutes Charged over plan:  = $" << setw(8) << minutesCharge << endl;
	}
	// Even though description doesn't explicitly say Tax - should compute it.
	cout << "Sales Tax  @ " << taxRate*100 << "%       :  = $" << setw(8) << monthlyTotal * taxRate << endl;
	cout << "------------------------------" << endl;
	cout << "Total Price              :  = $" << setw(8) << monthlyTotal * (1 + taxRate) << endl;
	
	return 0;
}