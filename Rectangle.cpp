#include "Rectangle.h"
#include <iostream>
#include <string>
using namespace std;

// Initialize object
Rectangle::Rectangle()
{
	// Set default row and space amounts
	rows = 10;
	width = 5;

	exitNum = 1;
}

// Deconstructor
Rectangle::~Rectangle()
{

}

// Get the width
int Rectangle::getWidth()
{
	return width;
}

// Get the row amount
int Rectangle::getRowAmount()
{
	return rows;
}

// Set the width
void Rectangle::setWidth(int newNum)
{
	width = newNum;
}

// Set the row amount
void Rectangle::setRowAmount(int newNum)
{
	rows = newNum;
}

// Ask the user to the rectangle dimensions
void Rectangle::requestDim()
{
	// Ask for the width
	cout << "Please enter the width of the rectangle: ";
	cin >> width;
	cout << "" << endl;

	// Ask for the number of rows
	cout << "Please enter the amount of rows for the rectangle: ";
	cin >> rows;

	// Create new line
	cout << "" << endl;

}

// Create the triangle
void Rectangle::createRectangle()
{
	// While exit num is not equal to 0 then print the rectangle and ask the user for more
	while (exitNum != 0)
	{
		// Create a new line
		cout << "" << endl;

		// Ask the user for the rectangle dimensions
		requestDim();

		// Create the rectangle rows
		for (int r = 0; r < getRowAmount(); r++)
		{
			// Create the stars
			for (int st = 0; st < getWidth(); st++)
			{
				cout << "*";
			}

			// Create a new line
			cout << "" << endl;

		}

		// Create a new line
		cout << "" << endl;

		// Ask the user if they want to exit
		cout << "Press 0 to exit creating this shape: ";
		cin >> exitNum;	
	}

	// Reset exit num
	exitNum = 1;

}