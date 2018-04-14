/*

This program will calculate long distance calls depending on time and amount of minutes.

Ask user what the starting time of their call was
save input at starttime

ask user the amount of minutes they used
save input of minutes

calculate the amount of minutes used and time called

display the amount of charges coinsiding with the following chart


Start Time of Call				Rate Per Minute

00:00 - 05:59					.12

06:00 - 12:59					.23

13:00 - 19:00					.55

19:01 - 23.59					.35

Remember to not except times past 23:59, also note that any number greater than 59 are not accepted.

also no negatives allowed

start time is what determines rate


----------------------------------------------------
Author: Tam T. Tran
Created: September 11, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------


*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// variables
	double callTime, callRate, minutes;

	cout << "This is a Long Distance Call Calculator \n \n";

	// Ask for start time
	cout << "What time did you start your call? \n \n";
	cout << "Enter the time in 24 hour format: HH is Hours and MM is minutes \n";
	cout << "For example 16.20 \n \n";
	cin >> callTime;

	// Restrict call time to no more than 24 and no less than 0, also cannot have any number above .59
	if (callTime > 24.00 || callTime < 0 || (callTime - (int)callTime) > 0.59)
	{
		cout << "You have entered in an invalid call time, please enter in a time between: \n";
		cout << "00.00 and 23.59 \n";
		cin >> callTime;
	}

	// Ask for amount of minutes

	cout << "How long did the call last in minutes? \n";
	cin >> minutes;

	// No negative amount of minutes
	if (minutes < 0)
	{
		cout << endl;
		cout << "You have entered in an invalid number of minutes, please enter in positive number of minutes \n";
		cin >> minutes;
	}

	// Calculations

	if (callTime < 5.59)
	{
		callRate = minutes * .12;
	}

	else if (callTime >= 6 && callTime <= 12.59)
	{
		callRate = minutes * .23;
	}

	else if (callTime >= 13 && callTime <= 18.59)
	{
		callRate = minutes * .55;
	}

	else if (callTime >= 19 && callTime <= 23.59)
	{
		callRate = minutes * .35;
	}


	// Results

	cout << fixed << showpoint << setprecision(2);

	cout << "The start time of your call was: " << callTime << endl;
	cout << "The charges for the amount of " << minutes <<  " minutes used" << " will cost $" << callRate << endl;

	return 0;

}