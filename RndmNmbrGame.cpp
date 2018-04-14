/*
This program is a Random Number Game.

Display "Guess a random number between 1-100
	Get guess

Display "Too high, try again." if they guessed too high
	Get guess

Display "Too low, try again." if they guessed too low
	Get Guess

Loop above until user gets correct answer or has made 10 guesses.

Keep track of the number of guesses

Make sure user enters between 1-100, if not they should be make another guess.  This shouldn't count as a guess.

end program with amount of guesses with the following output messages.

Number of guesses:				OutPut Message

< 5								"Either you know the secret or you got lucky!"
5-7								"You're pretty good at this!"
8-9								"You'll do better next time."
10 is incorrect					"Sorry you've taken too many guesses"


----------------------------------------------------
Author: Tam T. Tran
Created: September 17, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	

	// Variables
		
	int tries = 0;						// Number of tries stored here
	int guess;							// User's guess is stored here.
	srand(time(0));						// random number generator
	int number;						
	number = rand () % 100 + 1;			// Random number is stored here.
	

	// Display message to user

	cout << "Welcome to Tom's Random Number Game! \n\n";

	do
	{
		cout << "Please guess of a number between 1 and 100. \n";
		cin >> guess;

		tries++;

		// restricts numbers between 1-100

		while (guess < 1 || guess > 100)  
		{
			cout << "\nSorry you have guessed a number that is not between 1 and 100 \n";
			cout << "Please try again.\n \n";
			cin >> guess;
		
		}

		if (guess > number)						// lets user know their number is too high.

			cout << "\nToo High! Try again. \n \n";

		else if (guess < number)				// lets user know their number is too low.

			cout << "\nToo Low!  Try again. \n \n";

		else									// lets user know they got the right answer in x amount of tries
	
			cout << "\nWell done, you got the right number in " << tries << " tries." << endl;

	}
	
	
	while (guess != number && tries < 10);

	// Lets user know the amount of tries = to a certain response.

	if (tries <= 5)
	{
		cout << "\nEither you know the secret or you got lucky! \n";
		tries++;
	}

	else if (tries == 6 || tries == 7)
	{
		cout << "\nYou're pretty good at this! \n";
		tries++;
	}

	else if (tries == 8 || tries == 9)
	{
		cout << "\nYou'll do better next time.";
		tries++;
	}

	else if (tries == 10)
	{
		cout << "\nSorry - You have taken too many guesses. \n";
		return 0;
	}
		

	cin.ignore();
	cin.get();
	
	return 0;




}