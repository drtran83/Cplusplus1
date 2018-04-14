/*
This program is to calculate Compound Interest Earned with no additional deposits

Process: 

Display: Ask user to enter in principle amount
	save as principle
Display: Ask user to enter interest rate
	save as rate
Display: Ask user to enter amount of times interest is compounded
	save as compounded

Calculate compoundInterest

Calculate compoundInterest and principle


Display as: 

Interest Rate:         4.25%
Times Compounded:         12
Principle:          $1000.00
Interest:             $43.34
Amount in savings:  $1043.34


---------------------------------------------------
Define constants and variables

Constant = principle 
	Variables = interest rate, Times compounded

----------------------------------------------------
Author: Tam T. Tran
Created: September 4, 2015
Revisions: so many I can't even remember :-)
Class: CISS 241 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void main ()

{

	double rate;               // Interest Rate
	int compounded;            // Amount of times compounded
	double principle;          // The principle amount
	double compoundInterest;   // The amount after principle and interest rate are calculated
	int interestTotal;         // The amount after principle and interest are added
	double savingsAmount;      // Total amount
	


	cout << "Enter the principle amount: ";
	cin >> principle;

	cout << "Enter Percentage Rate: ";
	cin >> rate;

	cout << "Enter amount of times interest is compounded: ";
	cin >> compounded; 

	cout << "Interest Rate:            " << rate << "%" << endl;

	cout << "Times Compounded:            " << compounded << endl;

	cout << "Principle:             $" << showpoint << principle << endl;

	//calculate interest amount
	compoundInterest = principle *  pow( 1 + ((rate/100)/compounded), compounded) - principle;

	cout << "Interest:              $" << showpoint << compoundInterest << endl;

	//calculate interest total
	savingsAmount = principle + compoundInterest;
	cout << "Savings Amount:        $" << savingsAmount << endl;

}

