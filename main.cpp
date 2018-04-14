/*
This program is to figure how much MPG
Car has a 16 Gallon Tank 
Car gets 345 miles city
Car gets 460 miles highway

Define variables = mileage
Define constant = 16 gallon tank

Calculate mpg for city by taking 345 / 16
display city mpg

calculate mpg for highway by taking 460 / 16
display highway mpg

Program by Tom Tran - CISS 241 - Professor James Viviano

*/

#include <iostream>
using namespace std;

void main()
{
	double tank = 16;
	double city = 345;
	double highway = 460;
	double totalCity = 0;
	double totalHwy = 0;

	totalCity = city / tank;
	
	totalHwy = highway / tank;

		cout << "The MPG for City driving is " << totalCity << endl;

		cout << "The MPG for Highway driving is " << totalHwy << endl;


}
