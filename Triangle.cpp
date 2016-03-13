#include "Triangle.h"
#include <iostream>
#include <string>
using namespace std;

// Initialize object
Triangle::Triangle()
{
	// Set the default row amount
	rowAmount = 10;
}

// Deconstructor
Triangle::~Triangle()
{
}

// Create the triangle
void Triangle::createTriangle()
{
	while (exitNum != 0)
	{
		// Create a new line
		cout << " " << endl;

		// Ask the user for the triangle length
		requestRowAmount();

		// Create a new line
		cout << " " << endl;

		// Set the amount of spaces and stars initialy
		stars = 1;
		spaces = getRowAmount() - 1;

		// Create the triangle rows
		for (int row = 0; row < getRowAmount(); row++)
		{
			// Create the spaces
			createSpaces(spaces);

			// Create the stars
			createStars(stars);

			// Create a new line
			cout << "" << endl;

			// Decrement the amount of spaces
			spaces--;

			// Increment the amount of stars
			stars++;

		}

		// Create a new line
		cout << " " << endl;

		// Ask the user if they want to exit
		cout << "Press 0 to exit creating this shape: ";
		cin >> exitNum;
	}

	// Reset exitNum
	exitNum = 1;

}

// Create the triangle spaces
void Triangle::createSpaces(int length)
{
	// Print the spaces
	for (int sp = 0; sp < length; sp++)
	{
		cout << " ";
	}
}

// Create the triangle stars
void Triangle::createStars(int length)
{
	// Print the stars
	for (int st = 0; st < length; st++)
	{
		cout << "*";
	}
}

// Get the amount of stars
int Triangle::getStars()
{
	return stars;
}

// Get the amount of spaces
int Triangle::getSpaces()
{
	return spaces;
}

// Get the row amount
int Triangle::getRowAmount()
{
	return rowAmount;
}

// Set the row amount
void Triangle::setRowAmount(int newNum)
{
	rowAmount = newNum;
}

// Ask the user for the row amount
void Triangle::requestRowAmount()
{
	// Ask the user for the length of the triangle
	cout << "Please enter the length of the triangle: ";
	cin >> rowAmount;
	setRowAmount(rowAmount);

}
