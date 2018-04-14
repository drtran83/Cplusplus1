/*

This Program will allow a user to keep track of plane reservations

Program should display the seating chart for the airplane
	-use * to indicate a taken seat
	-use # to indicate a available seat

Display a menu that will provide the user with several options for seating:

	- Rows 1-5 are First class and most expensive
		- Each FC row has 2 seats each side with a total of 4 per row.

	- Next 10 rows are coach
			Each Coach row has 3 seats each side with a total of 6 per row
		- 6-10 rows of coach are next costly
		- 10-15 rows of coach are the cheapest		

Prices for the seats are stored in seatprices.txt

The menu will provide:
	Choices to reserve a seat
	Display total number of seats sold in first and coach classes
	Display total number of empty seats on plane
	Amount of sales in $$.


----------------------------------------------------
Author: Tam T. Tran
Created: October 6th, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include <iomanip>
#include <fstream>							// allows for the importing of file.
#include <string>

using namespace std;

// Constants

const int FirstCOLS = 4;					// Columns for First class
const int FirstROWS = 5;					// Rows for First class

const int CoachCOLS = 6;					// Columns for Coach class 
const int CoachROWS = 5;					// Rows for Coach class 


// Function prototypes

void seatChart(char FirstArray[FirstROWS][FirstCOLS], char Coach1Array [CoachROWS][CoachCOLS], 
				char Coach2Array[CoachROWS][CoachCOLS]);

void displayMenu(double, char FirstArray[FirstROWS][FirstCOLS], char Coach1Array[CoachROWS][CoachCOLS],
				char Coach2Array[CoachROWS][CoachCOLS]);

int main()
{
	
	// Variables

	double choice = 0;
	
	const int FIRSTCLASS = 1,
		FIRSTCOACH = 2,
		SECONDCOACH = 3,
		DISPLAYSEAT = 4,
		DISPLAYSEATSOLD = 5,
		DISPLAYEMPTY = 6,
		DISPLAYTOTALSALES = 7,
		EXIT = 8;

	// Arrays

	char FirstArray[FirstROWS][FirstCOLS];
	char Coach1Array[CoachROWS][CoachCOLS];  
	char Coach2Array[CoachROWS][CoachCOLS];  

	// intro

	cout << "Welcome to my Airline Seat Reservation System" << endl;
	cout << "============================================= \n" << endl;

	displayMenu(choice, FirstArray,Coach1Array,Coach2Array);
	
	return 0;
}
	

// This is a function to display the menu

void displayMenu(double, char FirstArray[FirstROWS][FirstCOLS], char Coach1Array[CoachROWS][CoachCOLS],
	char Coach2Array[CoachROWS][CoachCOLS])
{
	// Variables

	int CHOICE;

	int fcrow, fccol;								// first class rows and columns inputs
	int fccrow, fcccol;								// first coach class row and columns inputs
	int scrow, sccol;								// second coach class row and column inputs
	double countFirst = 0, countFirstCoach = 0, countSecondCoach = 0;								// stores how many tickets bought

	double fctotal= 0, fcctotal = 0, sctotal= 0;				// stores total pricing for tickets

	const int FIRSTCLASS = 1,
			FIRSTCOACH = 2,
			SECONDCOACH = 3,
			DISPLAYSEAT = 4,
			DISPLAYSEATSOLD = 5,
			DISPLAYEMPTY = 6,
			DISPLAYTOTALSALES = 7,
			EXIT = 8;

	double firstprice;
	double coach1price;
	double coach2price;
	double seatssold;
	double emptyseats;
	double salestotals;

	
	do {


		cout << "\nPlease pick from the following options: 1-8" << endl;
		cout << "======================================" << endl;

		cout << "To Reserve a seat Please choose options 1-3:\n" << endl;

		cout << "1.  First Class" << endl;
		cout << "2.  First Coach Class" << endl;
		cout << "3.  Second Coach Class" << endl;
		cout << "4.  Display Seat Chart" << endl;
		cout << "5.  Display Total Seats Sold" << endl;
		cout << "6.  Display Empty Seats" << endl;
		cout << "7.  Display Total Sales" << endl;
		cout << "8.  Exit\n" << endl;
		cin >> CHOICE;

		//Opens input files

		ifstream inputFile;
		inputFile.open("SeatPrices.txt");

		// Checks for failure.

		if (inputFile.fail())
		{
			cout << "Sorry File does not exist or can not be found.\n";
			exit(1);
		}

		// read the numbers and load them into doubles

		inputFile >> firstprice;
		inputFile >> coach1price;
		inputFile >> coach2price;

		// closing file

		inputFile.close();

		// Switch statement

		switch (CHOICE)
		{

			// First Class

		case FIRSTCLASS:
			cout << "You have chosen: First Class" << endl;
			cout << "How many tickets would you like?" << endl;
			cin >> countFirst;

			fctotal = countFirst * firstprice;

			cout << "\nThe price for " << countFirst << " ticket(s) for First Class is $" << fctotal << " at $" << firstprice << " per ticket." << endl;

			cout << "\nNow please pick which row you would like to sit in (1-5): ";
			cin >> fcrow;

			if (fcrow > 5)
			{
				cout << "\nYou have entered an invalid row number, please enter in between 1-5: ";
				cin >> fcrow;
			}

			cout << "\nPlease pick which seat you would like to sit in, please enter between 1-4: ";
			cin >> fccol;

			if (fccol > 4)
			{
				cout << "\nYou have entered an invalid seat number, please enter between 1-4 ";
				cin >> fccol;
			}


			if (FirstArray[FirstROWS - 1][FirstCOLS - 1] != '*')
			{

				FirstArray[FirstROWS - 1][FirstCOLS - 1] = '*';
				cout << endl << "Your seat has been reserved\n";
				countFirst++;

			}

			else {
				cout << "I'm sorry the seat is occupied" << endl;
			}

			break;

			// First Coach Class

		case FIRSTCOACH:
			cout << "You have chosen: First Coach Class" << endl;
			cout << "How many tickets would you like?" << endl;
			cin >> countFirstCoach;

			fcctotal = countFirstCoach * coach1price;

			cout << "\nThe price for " << countFirstCoach << " ticket(s) for First Class is $" << fcctotal << " at $" << coach1price << " per ticket." << endl;

			cout << "\nNow please pick which row you would like to sit in: ";
			cin >> fccrow;

			if (fccrow > 10)
			{
				cout << "\nYou have entered an invalid row number, please enter  between 6-10 ";
				cin >> fccrow;
			}

			cout << "\nPlease pick which seat you would like to sit in, please enter between 1-6:  ";
			cin >> fcccol;

			if (fcccol > 6)
			{
				cout << "You have entered an invalid seat number, please enter between 1-6";
				cin >> fcccol;
			}

			if (Coach1Array[CoachROWS - 1][CoachCOLS - 1] != '*')
			{

				Coach1Array[CoachROWS - 1][CoachCOLS - 1] = '*';
				cout << endl << "Your seat has been reserved\n";
				countFirstCoach++;
			}

			else {
				cout << "I'm sorry the seat is occupied" << endl;
			}

			break;

			// Second Coach Class

		case SECONDCOACH:
			cout << "You have chosen: Second Coach Class" << endl;
			cout << "How many tickets would you like?" << endl;
			cin >> countSecondCoach;

			sctotal = countSecondCoach * coach2price;

			cout << "\nThe price for " << countSecondCoach << " ticket(s) for First Class is $" << sctotal << " at $" << coach2price << " per ticket." << endl;

			cout << "\nNow please pick which row you would like to sit in, please choose between 11-15 ";
			cin >> scrow;

			if (scrow > 15)
			{
				cout << "\nYou have entered an invalid row number, please enter in between 11-15 ";
				cin >> scrow;
			}

			cout << "Please pick which seat you would like to sit in: ";
			cin >> sccol;


			if (sccol > 6)
			{
				cout << "You have entered an invalid seat number, please enter between 1-6";
				cin >> sccol;
			}

			if (Coach2Array[CoachROWS - 1][CoachCOLS - 1] != '*')
			{

				Coach2Array[CoachROWS - 1][CoachCOLS - 1] = '*';
				cout << endl << "Your seat has been reserved\n";
				countSecondCoach++;

			}

			else {
				cout << "I'm sorry the seat is occupied" << endl;
			}
			break;

			// Shows seat arrangment

		case DISPLAYSEAT:

			seatChart(FirstArray, Coach1Array, Coach2Array);
			break;

			// Shows seats sold

		case DISPLAYSEATSOLD:

			seatssold = countFirst + countFirstCoach + countSecondCoach;

			cout << "The total seats sold thus far are: " << seatssold << endl;
			break;

			// Shows empty seats

		case DISPLAYEMPTY:

			emptyseats = 80 - (countFirst + countFirstCoach + countSecondCoach);

			cout << "The amount of empty seats are: " << emptyseats << endl;
			break;

			// Displays total sales

		case DISPLAYTOTALSALES:

			salestotals = fctotal + sctotal + fcctotal;

			cout << "The total sales thus far is: $" << salestotals << endl;
			break;

			// Exits program

		case EXIT:

			cout << "You have chosen to Exit the program" << endl;
			cout << "Thank you for using my program, have a good day!" << endl;
			exit(1);
			break;

		default: cout << "You have entered in an invalid choice, please pick between 1-8" << endl;

		}
	} while (CHOICE != EXIT);
	}
	

// This is a Function for the Seating Chart

void seatChart(char FirstArray[FirstROWS][FirstCOLS], char Coach1Array[CoachROWS][CoachCOLS],
	char Coach2Array[CoachROWS][CoachCOLS])
{

	char input;
	
	cout << "\nThis is the Seating Chart" << endl;
	cout << "========================= \n" << endl;

	cout << "# - Available Seats \n";
	cout << "* - Taken Seats \n";
	cout << "Seats that are available to you are: \n";

	cout << "First Class are seats 1-4, Rows 1-5\n" << endl;
	
	for (int x = 0; x < FirstROWS; x++)
	{
		cout << right << setw(2) << "Row: " << x + 1;

		for (int y = 0; y < FirstCOLS; y++)
		{
			FirstArray[x][y] = '#';

			cout << setw(2) << FirstArray[x][y];

		}

		cout << endl;
}

	cout << "\nFirst Coach Class are seats 1-6, Rows 6-10:" << endl;

	for (int x = 0; x < CoachROWS; x++)
	{
		cout << right << setw(2) << "Row: ";

		for (int y = 0; y < CoachCOLS; y++)
		{
			Coach1Array[x][y] = '#';

			cout << setw(2) << Coach1Array[x][y];
		}

		cout << endl;
	}

	cout << "\nSecond Coach Class are seats 1-6, Rows 11-15" << endl;

	for (int x = 0; x < CoachROWS; x++)
	{
		cout << right << setw(2) << "\nRow: ";

		for (int y = 0; y < CoachCOLS; y++)
		{
			Coach2Array[x][y] = '#';

			cout << setw(2) << Coach2Array[x][y];
		}
	}

	cout << endl;

	cout << "\nWould you like to go back the main menu y/n?" << endl;
	cin >> input;

	if (input == 'y')
	{
		displayMenu;
	}
	else if (input == 'n')
	{

		cout << "Thank you for using my program." << endl;
		exit(1);
	}

}

	

