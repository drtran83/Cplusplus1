/*

This program will display the sales for the year



----------------------------------------------------
Author: Tam T. Tran
Created: October 3rd, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <iomanip>

using namespace std;

// Funciton prototypes

double getLowest(double northq1, double northq2, double northq3, double northq4, double southq1, double southq2, double southq3, double southq4, double eastq1,
					double eastq2, double eastq3, double eastq4, double westq1, double westq2, double westq3, double westq4);

double getHighest(double northq1, double northq2, double northq3, double northq4, double southq1, double southq2, double southq3, double southq4, double eastq1,
	double eastq2, double eastq3, double eastq4, double westq1, double westq2, double westq3, double westq4);



int main()
{
	// Variables


	double northq1, northq2, northq3, northq4;						// stores values for north q1,2,3 and 4
	double southq1, southq2, southq3, southq4;						// stores values for south
	double eastq1, eastq2, eastq3, eastq4;							// stores values for east
	double westq1, westq2, westq3, westq4;							// stores values for west
	double northtotal, southtotal, easttotal, westtotal;			// stores division total values
	double q1total, q2total, q3total, q4total;						// stores quartar totals
	double divtotal, average, highest, lowest;
	


	// Intro
	cout << "This program will calculate the sales for the year\n";
	cout << "=======================================================================================\n\n";

	// Inputs

	// North

	cout << "Please enter in the Sales for North: Quarter 1" << endl;
	cin >> northq1;

	cout << "Please enter in the Sales for North: Quarter 2" << endl;
	cin >> northq2;

	cout << "Please enter in the Sales for North: Quarter 3" << endl;
	cin >> northq3;

	cout << "Please enter in the Sales for North: Quarter 4" << endl;
	cin >> northq4;

	// South

	cout << "\nPlease enter in the Sales for South: Quarter 1" << endl;
	cin >> southq1;

	cout << "Please enter in the Sales for South: Quarter 2" << endl;
	cin >> southq2;

	cout << "Please enter in the Sales for South: Quarter 3" << endl;
	cin >> southq3;

	cout << "Please enter in the Sales for South: Quarter 4" << endl;
	cin >> southq4;

	// East

	cout << "\nPlease enter in the Sales for East: Quarter 1" << endl;
	cin >> eastq1;

	cout << "Please enter in the Sales for East: Quarter 2" << endl;
	cin >> eastq2;

	cout << "Please enter in the Sales for East: Quarter 3" << endl;
	cin >> eastq3;

	cout << "Please enter in the Sales for East: Quarter 4" << endl;
	cin >> eastq4;

	// West

	cout << "\nPlease enter in the Sales for West: Quarter 1" << endl;
	cin >> westq1;

	cout << "Please enter in the Sales for West: Quarter 2" << endl;
	cin >> westq2;

	cout << "Please enter in the Sales for West: Quarter 3" << endl;
	cin >> westq3;

	cout << "Please enter in the Sales for West: Quarter 4" << endl;
	cin >> westq4;


	// calculations

	// Totals for divisions

	northtotal = northq1 + northq2 + northq3 + northq4;
	southtotal = southq1 + southq2 + southq3 + southq4;
	easttotal = eastq1 + eastq2 + eastq3 + eastq4;
	westtotal = westq1 + westq2 + westq3 + westq4;

	// Totals for each quarter

	q1total = northq1 + southq1 + eastq1 + westq1;
	q2total = northq2 + southq2 + eastq2 + westq2;
	q3total = northq3 + southq3 + eastq3 + westq3;
	q4total = northq4 + southq4 + eastq4 + westq4;

	// Total and average

	divtotal = q1total + q2total + q3total + q4total + westtotal + northtotal + southtotal + easttotal;

	average = divtotal / 16;

	// highest and lowest
	 
	lowest = getLowest(northq1, northq2, northq3, northq4, southq1, southq2, southq3, southq4, eastq1,
						eastq2, eastq3, eastq4, westq1, westq2, westq3, westq4);

	highest = getHighest(northq1, northq2, northq3, northq4, southq1, southq2, southq3, southq4, eastq1,
		eastq2, eastq3, eastq4, westq1, westq2, westq3, westq4);
	

	// Outputs

	cout << "\n";
	cout << "Division:\t" << "Quarter 1:\t" << "Quarter 2:\t" << "Quarter 3:\t" << "Quarter 4:\t" << "Division Total:"  << endl;
	cout << "==========================================================================================" << endl;

	cout << "North:\t\t" << northq1 << "\t\t" << northq2 << "\t\t" << northq3 << "\t\t" << northq4 << "\t\t" << northtotal << endl;
	cout << "South:\t\t" << southq1 << "\t\t" << southq2 << "\t\t" << southq3 << "\t\t" << southq4 << "\t\t" << southtotal << endl;
	cout << "East:\t\t"  << eastq1 << "\t\t" << eastq2 << "\t\t" << eastq3 << "\t\t" << eastq4 << "\t\t" << easttotal << endl;
	cout << "West:\t\t"    << westq1 << "\t\t" << westq2 << "\t\t" << westq3 << "\t\t" << westq4 << "\t\t" << westtotal << endl;
	cout << "Quarter Total:\t" << q1total << "\t\t" << q2total << "\t\t" << q3total << "\t\t" << q4total << "\t\t" << divtotal <<endl;

	cout << "\nThe average is: " << average << endl;							// Displays average
	cout << "\nThe highest is:" << highest << endl;								// Displays highest
	cout << "\nThe lowest is:  " << lowest << endl;								// Displays lowest

	return 0;

}

double getLowest(double northq1, double northq2, double northq3, double northq4, double southq1, double southq2, double southq3, double southq4, double eastq1,
	double eastq2, double eastq3, double eastq4, double westq1, double westq2, double westq3, double westq4)
{
	double lowest = northq1;

	if (northq2 < lowest)
	{
		lowest = northq2;
	}
	if (northq3 < lowest)
	{
		lowest = northq3;
	}

	if (northq4 < lowest)
	{
		lowest = northq4;
	}

	if (southq1 < lowest)
	{
		lowest = southq1;
	}
	if (southq2 < lowest)
	{
		lowest = southq2;
	}

	if (southq3 < lowest)
	{
		lowest = southq3;
	}

	if (southq4 < lowest)
	{
		lowest = southq4;
	}

	if (eastq1 < lowest)
	{
		lowest = eastq1;
	}

	if (eastq2 < lowest)
	{
		lowest = eastq2;
	}

	if (eastq3 < lowest)
	{
		lowest = eastq3;
	}

	if (eastq4 < lowest)
	{
		lowest = eastq4;
	}
	if (westq1 < lowest)
	{
		lowest = westq1;
	}
	if (westq2 < lowest)
	{
		lowest = westq2;
	}
	if (westq3 < lowest)
	{
		lowest = westq3;
	}
	if (westq4 < lowest)
	{
		lowest = westq4;
	}
	return lowest;
}

double getHighest(double northq1, double northq2, double northq3, double northq4, double southq1, double southq2, double southq3, double southq4, double eastq1,
	double eastq2, double eastq3, double eastq4, double westq1, double westq2, double westq3, double westq4)
{
	double highest = northq1;

	if (northq2 > highest)
	{
		highest = northq2;
	}
	if (northq3 > highest)
	{
		highest = northq3;
	}

	if (northq4 > highest)
	{
		highest = northq4;
	}

	if (southq1 > highest)
	{
		highest = southq1;
	}
	if (southq2 > highest)
	{
		highest = southq2;
	}

	if (southq3 > highest)
	{
		highest = southq3;
	}

	if (southq4 > highest)
	{
		highest = southq4;
	}

	if (eastq1 > highest)
	{
		highest = eastq1;
	}

	if (eastq2 > highest)
	{
		highest = eastq2;
	}

	if (eastq3 > highest)
	{
		highest = eastq3;
	}

	if (eastq4 > highest)
	{
		highest = eastq4;
	}
	if (westq1 > highest)
	{
		highest = westq1;
	}
	if (westq2 > highest)
	{
		highest = westq2;
	}
	if (westq3 > highest)
	{
		highest = westq3;
	}
	if (westq4 > highest)
	{
		highest = westq4;
	}
	return highest;

}
