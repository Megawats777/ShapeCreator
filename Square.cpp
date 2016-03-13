#include "Square.h"
#include <string>
#include <iostream>
using namespace std;

// Initialize Object
Square::Square()
{
	exitNum = 1;
}

// Deconstructor
Square::~Square()
{

}

// Ask the user for the dimensions of the square
void Square::requestDim()
{
	cout << "" << endl;
	cout << "Please enter the desired length of the square: ";
	cin >> desiredLength;
	cout << "" << endl;
}

// Create the square
void Square::createSquare()
{
	// While exit num is not equal to zero create the square and ask the user for more
	while (exitNum !=0)
	{
		// Ask the user for the dimensions of the square
		requestDim();

		// Set the amount of stars
		stars = getDesiredLength();

		// Create the square
		for (int rows = 0; rows < getDesiredLength(); rows++)
		{
			// Print the stars
			for (int st = 0; st < getStars(); st++)
			{
				cout << "* ";
			}

			// Print a new line
			cout << "" << endl;
		}

		// Ask the user if they want to exit
		cout << "" << endl;
		cout << "Press 0 to exit creating this shape: ";
		cin >> exitNum;
	}

	// Reset exit num
	exitNum = 1;
}

// Get the amount of stars
int Square::getStars()
{
	return stars;
}

// Get the desired length of the square
int Square::getDesiredLength()
{
	return desiredLength;
}
