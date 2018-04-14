/*
 
 This Program is designed to read from a .txt file.

 Display that the file is being read
	Validate that 

 Count how many numbers were read from file
	Display that count

Get sum of all the numbers in the file
	Display the sum

Get the average of all the numbers in the file
	Display the average

Determine lowest and highest values in the file
	Display lowest and highest values

If file does not exist:
	Display that file could not be opened and exit.

----------------------------------------------------
Author: Tam T. Tran
Created: September 18, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <fstream> // allows for files to be opened, read, and written to.
using namespace std;

int main()
{

	ifstream inputFile;

	// Variables
	int num;
	int count = 0;
	int sum = 0; 
	int min = 0;
	int max = 0;
	double avg = 0.0;

	// Opens the file
	inputFile.open("DirectFileTopicDownload.txt");

	// Let user know we are reading the file
	cout << "Reading the data from the file...... \n\n";

	if (inputFile.fail())
	{
		cout << "Sorry File does not exist or can not be found.\n";
		exit(1);
	}

	// Reads the all the numbers in the file and displays them.
	while (inputFile >> num)
	{
		if (num > max)  
		{
			max = num;					// Shows the largest number
		}
		if (num < min)
		{
			min = num;					// Shows the smallest number
		}

		if (inputFile)
		{
			sum += num;					// Adds all the numbers together
			count++;					// Counts the numbers
			avg = sum / count;			// Finds the average
	}
	}

	

	// outputs
	cout << "\nThere are: " << count << " numbers in the file." << endl;
	cout << "\nThe largest number is: " << max <<"." << endl;
	cout << "\nThe smallest number is: " << min << "." << endl;
	cout << "\nThe sum of all of the numbers is : " << sum << "." << endl;
	cout << "\nThe average of all of the numbers is : " << avg << "." << "\n" << endl;



	// Close the file.

	inputFile.close();

	return 0;
}