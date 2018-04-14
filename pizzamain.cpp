/*

This program is for Joes Pizza.  It should calculate the number of slices a pizza of any size can be divided into.

The program should report the number of pizzas someone should order for a party.

Assume each person eats 3 slices.


Display "What is the diameter of your pizza (in inches)?
Input pizza diameter

Display "A pizza of that size has x slices"

Display "How many people are attending your party?"
Input people amount

Calculate amount of pizzas that should be ordered

Display the amount of pizzas that should be ordered.


----------------------------------------------------
Author: Tam T. Tran
Created: September 6, 2015
Revisions: still didn't keep track of how many revisions....
Class: CISS 241 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double Diameter, Slices, PizzaArea;
	double PizzaRadius, AmountofPizzas;
	double People;

	const double AreaPerSlice = 14.125;
	const double Pi = 3.14159;
	const double SlicesEaten = 3;

	cout << "Welcome to Joe's Pizza Place" << endl;

	// Prompt user for diameter of pizza in inches.
	cout << "What is the size of pizza would you like to order (in inches)? " << endl;
	cin >> Diameter;

	// Pizza Calculationssss

	cout << fixed << setprecision(3);

	PizzaRadius = Diameter / 2;
	PizzaArea = Pi * Diameter;
	Slices = AreaPerSlice / PizzaArea;

	// Ask user how many people will be attending
	cout << "How many people will be attending your party?" << endl;
	cin >> People;

	// Let user know how many slices of on their pizza
	cout << fixed << setprecision(3);
	cout << "The Pizza size you chose has " << Slices << " many slices." << endl;

	//Calculate amount of pizza needed 
	AmountofPizzas = People * (SlicesEaten / Slices);

	//Let them know how many pizzas they should order.
	cout << "You should order " << AmountofPizzas << " pizzas." << endl;

	cout << "Thank you for ordering from Joe's Pizza!!" << endl;


	return 0;
}