/*
This program is a Geometry Calculator

First display the options as such:

1.  Will Calculate the Area of a Circle
2.  Will Calculate the Area of a Rectangle
3.  Will Calculate the Area of a Triangle
4.  Will Calculate the Area of a Trapezoid
5.  Will Caculuate the Area of a Sphere
6.  Exit

Next Display according to users selection:

For example Circle:

Prompt user to enter radius for Circle
	Calculate the area
		Display the area

Rectangle: 

Prompt user to enter Length
	save length
Prompt user to enter width
	save widht
Calculate area
	Display area.

And so forth.

If user selects 6, then exit program.



----------------------------------------------------
Author: Tam T. Tran
Created: September 10, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;



void main()
{

	// Introduction and ask user to select which option

	cout << "Tom's Geometry Calculator\n \n";
	cout << "Please select from the following options below.\n\n";

	int Choice; // Holds the Choice
	int radius, width, length, base1, base2, height; // Holds the Values entered
	double circleArea, rectangleArea, triangleArea, trapezoidArea, sphereArea; // Holds the Areas
	
	

	//Constants for menu choices

	const int Circle = 1,
		Rectangle = 2,
		Triangle = 3,
		Trapezoid = 4,
		Sphere = 5,
		Exit = 6;
	const double pi = 3.14159;
	

	// Display options
	cout << "1.  Calculate the Area of a Circle.\n";
	cout << "2.  Calculate the Area of a Rectangle.\n";
	cout << "3.  Calculate the Area of a Triangle.\n";
	cout << "4.  Calculate the Area of a Trapezoid.\n";
	cout << "5.  Calculate the Area of a Sphere.\n";
	cout << "6.  Exit the Program.\n\n";
	cout << "=======================================\n" << endl;
	cout << "Enter your Choice (1-6): \n";
	cin >> Choice;

	//statements

		switch (Choice)
	{
		// Circle
		case 1 :
		cout << "Please enter the Radius of the Circle: " << endl;
				cin >> radius;
				while (radius<0)
				{
					cout << endl;
				cout << "The radius must be >=0. Enter the circle's radius: ";
				cin >> radius; }
		circleArea = pi * pow(radius,2);
			cout << "The area of the Circle is: " << circleArea << endl;
		break;

		// Rectangle
		case 2 :
		cout << "Please enter the width of the Rectangle: \n";
			cin >> width;
		while (width<0)
		{
			cout << endl;
			cout << "The width must be >=0. Please enter a positive width: ";
			cin >> width; }

		cout << "Please enter the length of the Rectangle: \n";
			cin >> length;
		while (length<0)
		{
			cout << endl;
			cout << "The length must be >=0. Please enter a positive length: " << endl;
			cin >> length; }

		rectangleArea = width * length;
			cout << "The area of the Rectangle is: " << rectangleArea << endl;
		break;

		// Triangle

		case 3: 
		cout << "Please enter in the base of the Triangle: \n";
			cin >> base1;

		while (base1 < 0)
		{
			cout << endl;
			cout << "The base number must be >=0. Please enter a postive base number: " << endl;
			cin >> base1; }

		cout << "Please enter in the height of the Triangle: \n";
			cin >> height;

		while (height < 0)
		{
			cout << endl;
			cout << "The height number must be >=0. Please enter a positive height number: \n";
			cin >> height; }

		triangleArea = (base1 * height) * .5;
			cout << "The area of the Triangle is: " << triangleArea << endl;
		break;

		// Trapezoid

		case 4:

		cout << "Please enter in the height of the Trapezoid: \n";
				cin >> height;

			while (height < 0)
			{
				cout << endl;
				cout << "The height number must be >=0. Please enter a positive height number: \n";
				cin >> height; }

		cout << "Please enter in the First Base of the Trapezoid: \n";
				cin >> base1;

			while (base1 < 0)
				{
				cout << endl;
				cout << "The base number must be >=0. Please enter a postive base number: " << endl;
				cin >> base1; }

		cout << "Please enter in the Second Base of the Trapezoid: \n";
				cin >> base2;
			while (base2 < 0)
				{
				cout << endl;
				cout << "The base number must be >=0. Please enter a postive base number: " << endl;
				cin >> base2; }

		trapezoidArea =  (base1 + base2) / 2 * height;
			cout << "The area of the Trapezoid is: " << trapezoidArea << endl;
		break;

		// Sphere

		case 5: 
		cout << "Please enter in the radius of the Sphere: \n ";
				cin >> radius;

			while (radius < 0)
				{
					cout << endl;
				cout << "The radius number must be >=0. Please enter a postive radius number: " << endl;
				cin >> radius; }

		sphereArea = 4 * pi * pow(radius, 2);
				cout << "The area of the Sphere is: " << sphereArea << endl;
		break;

		case 6:
			cout << "This ends the Program, Thank you \n" << endl;

		default: cout << "That is an invalid choice. The correct choices are 1, 2, 3, 4, 5, 6. \n";



	}
	
	
	
		

}