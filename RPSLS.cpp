/*

This is a Rock, Paper, Scissors, Lizard, Spock Game

Display a welcome to the game

First function is  void displayChoice (int) this will display a choice for the user:

	Display the options:
		1. Rock
		2. Paper
		3. Scissors
		4. Lizard
		5. Spock

Second function is int getUserChoice ()  this will get user's choice
	Ask user to enter 1-5
		Take input

Third function is int getComputerChoice ()  this will get computer's choice

Fourth function is bool determineWinner (int,int) this will determine the winner by the following 

	Scissors cut Paper
	Paper covers Rock
	Rock crushes Lizard
	Lizard poisons Spock
	Spock smashes (or melts) scissors
	Scissors decapitate Lizard
	Lizard eats Paper
	Paper disproves Spock
	Spock vaporizes Rock
	Rock breaks Scissors

----------------------------------------------------
Author: Tam T. Tran
Created: September 26, 2015
Rev: 2
Class: CISS 241 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function prototypes

int getUserChoice();
int getComputerChoice();
bool determineWinner(int cpuChoice, int uChoice);

int main()

{
	// Variables

	int uChoice = 0;
	int cpuChoice = 0;
	bool haveWinner = false;

	// Welcome the user
	cout << "Welcome!! Lets play \n\n====Rock, Paper, Scissors, Lizard, Spock====\n" << endl;

	// Display Rules
	cout << "Here are the rules to this game, in case you didn't know...." << endl;
	cout << "\n--Rock breaks Scissors--";
	cout << "-Scissors cut Paper--";
	cout << "-Paper covers Rock--" << endl;
	cout << "--Rock crushes Lizard--";
	cout << "-Lizard poisons Spock--";
	cout << "-Spock smashes (or melts) Scissors--" << endl;
	cout << "--Scissors decaptiates Lizard--";
	cout << "-Lizard eats Paper--";
	cout << "-Paper disproves Spock--" << endl;
	cout << "--Spock vaporizes Rock--" << endl;

	uChoice = getUserChoice();										// Gets user choice
	cpuChoice = getComputerChoice();								// Gets CPU choice
	haveWinner = determineWinner(uChoice, cpuChoice);				// Determines winner

	return 0;

}



	// This function will display a choice to the user


	int getUserChoice()
	{
		int uChoice;

		cout << "\nPlease pick from the following choices: (1-5) \n " << endl;
		cout << "1.  Rock" << endl;
		cout << "2.  Paper" << endl;
		cout << "3.  Scissors" << endl;
		cout << "4.  Lizard" << endl;
		cout << "5.  Spock\n" << endl;
		cout << "Enter your choice: ";
		cin >> uChoice;

		if (uChoice < 1 || uChoice > 5)
		{
			cout << "You choice does not compute. Please choose between 1 and 5" << endl;
			cin >> uChoice;
		}

		if (uChoice == 1)
		{
			cout << "\nYou have chosen: Rock" << endl;
		}

		if (uChoice == 2)
		{
			cout << "\nYou have chosen: Paper" << endl;
		}

		if (uChoice == 3)
		{
			cout << "\nYou have chosen: Scissors" << endl;
		}

		if (uChoice == 4)
		{
			cout << "\nYou have chosen: Lizard" << endl;
		}

		if (uChoice == 5)
		{
			cout << "\nYou have chosen : Spock!" << "Live Long and Prosper!" << endl;
		}

		return uChoice;

	}


	// This function will randomize computer's choice.

int getComputerChoice()
	{
		int cpuChoice;

		srand((unsigned)time(0));

		cpuChoice = rand() % 5 + 1;

		return cpuChoice;

	}


	// This function should determine the winner

	bool determineWinner(int uChoice, int cpuChoice)
	{

		bool winnerFound = false;

		if (uChoice == 1)																	// User picks Rock
		{

			if (cpuChoice == 2)
				cout << "You LOST :( the CPU WINS!  Paper covers Rock. \n" << endl;

			else if (cpuChoice == 3)
				cout << "You WIN!  Rock breaks Scissors \n" << endl;

			else if (cpuChoice == 4)
				cout << "You WIN! Rock crushes Lizard. \n" << endl;

			else if (cpuChoice == 5)
				cout << "You've LOST :( the CPU WINS!  Spock vaporizes Rock. \n" << endl;
			winnerFound = true;
		}

		else if (uChoice == 2)																// User picks Paper
		{
			if (cpuChoice == 1)

				cout << "You WIN!  Paper covers Rock. \n" << endl;

			else if (cpuChoice == 3)

				cout << "You've LOST :( the CPU WINS!  Scissors cut Paper. \n" << endl;

			else if (cpuChoice == 4)

				cout << "You've LOST :( the CPU WINS! Lizard eats Paper. \n" << endl;

			else if (cpuChoice == 5)

				cout << "You WIN!  Paper disproves Spock. \n" << endl;
			winnerFound = true;

		}

		else if (uChoice == 3)																// User picks Scissors
		{
			if (cpuChoice == 1)

				cout << "You've LOST :( the CPU WINS!  Rock breaks Scissors. \n" << endl;

			else if (cpuChoice == 2)

				cout << "You WON! Scissors cut Paper. \n" << endl;

			else if (cpuChoice == 4)

				cout << "You WON!  Scissors decapitates Lizard. \n" << endl;

			else if (cpuChoice == 5)

				cout << "You've LOST :(  the CPU WINS! Spock smashes (or melts) Scissors" << endl;
			winnerFound = true;
		}

		else if (uChoice == 4)																// User picks Lizard
		{
			if (cpuChoice == 1)

				cout << "You LOST :( the CPU WINS!  Rock crushes Lizard." << endl;

			else if (cpuChoice == 2)

				cout << "You WIN!  Lizard eats Paper. \n" << endl;

			else if (cpuChoice == 3)

				cout << "You LOST :( the CPU WINS!  Scissors decapitates Lizard. \n" << endl;

			else if (cpuChoice == 5)

				cout << "You WIN!  Lizard poisons Spock. \n" << endl;
			winnerFound = true;
		}

		else if (uChoice == 5)																// User picks Spock
		{
			if (cpuChoice == 1)

				cout << "You WIN!  Spock vaporizes Rock. \n" << endl;

			else if (cpuChoice == 2)

				cout << "You LOST! :( the CPU WINS!  Paper disproves Spock. \n" << endl;

			else if (cpuChoice == 3)

				cout << "You WIN! Spock smashes (or melts) Scissors. \n " << endl;

			else if (cpuChoice == 4)

				cout << "You LOST! the CPU WINS!  Lizard poisons Spock. \n" << endl;
			winnerFound = true;

		}

		// Section where the ties are stored
		else
		{
			if (uChoice == 1 && cpuChoice == 1)

				cout << "The game is a tie!  Both you and the CPU picked Rock! \n" << endl;

			else if (uChoice == 2 && cpuChoice == 2)

				cout << "The game is a tie!  Both you and the CPU picked Paper! \n" << endl;

			else if (uChoice == 3 && cpuChoice == 3)

				cout << "The game is a tie!  Both you and the CPU picked Scissor! \n" << endl;

			else if (uChoice == 4 && cpuChoice == 4)

				cout << "The game is a tie!  Both you and the CPU picked Lizard! \n" << endl;

			else if (uChoice == 5 && cpuChoice == 5)

				cout << "The game is a tie!  Both you and the CPU picked Spock! \n" << endl;

			winnerFound = false;

		}
		return 	winnerFound;

	}
