#include "HollowSquare.h"
#include <string>
#include <iostream>
using namespace std;

// Initialize Object
HollowSquare::HollowSquare()
{
	exitNum = 1;
}

// Deconstructor
HollowSquare::~HollowSquare()
{

}

// Ask the user for the dimensions of the hollow square
void HollowSquare::requestDim()
{
	cout << "" << endl;
	cout << "Please enter the desired length of the hollow square from 2 to 6: ";
	cin >> desiredLength;
	cout << "" << endl;

}

// Create the HollowSquare
void HollowSquare::createHollowSquare()
{
	// While exit num is not equal to zero create the hollow square and ask the user if they want to create more
	while (exitNum != 0 || desiredLength < 2 || desiredLength > 6)
	{
		// Ask the user for the dimensions of the hollow square
		requestDim();

		// If the entered length is not valid go back to the beginning of loop
		if (desiredLength < 2 || desiredLength > 6)
		{
			cout << "" << endl;
			cout << "Invalid Entry" << endl;
			cout << "" << endl;
			continue;
		}

		// Create the hollow squares
		for (int row = 0; row < getDesiredLength(); row++)
		{
			// Set the amount of spaces to print
			setSpaces(row);

			// Set the amount of stars to print
			setStars(row);

			// Print a single star
			cout << "*";

			// Print spaces
			for (int sp = 0; sp < getSpaces(); sp++)
			{
				cout << " ";
			}

			// Print stars
			for (int st = 0; st < getStars(); st++)
			{
				cout << " *";
			}

			// Print a single star
			cout << " *";

			// Print a new line
			cout << "" << endl;

		}

		// Ask the user if they want to create more hollow squares
		cout << "" << endl;
		cout << "Press 0 to exit creating this shape: ";
		cin >> exitNum;
		cout << "" << endl;
	}

	// Reset exit num
	exitNum = 1;

}

// Set the amount of spaces
void HollowSquare::setSpaces(int rowNum)
{
	// If the row number is equal to zero or the desired length print then no spaces
	if (rowNum == 0 || rowNum == getDesiredLength() - 1)
	{
		spaces = 0;
	}

	// If the desired length is equal to 3
	else if (getDesiredLength() == 3)
	{
		spaces = desiredLength - 1;
	}

	// If the desired length is equal to 4
	else if (getDesiredLength() == 4)
	{
		spaces = desiredLength;
	}

	// If the desired length is equal to 5
	else if (getDesiredLength() == 5)
	{
		spaces = desiredLength + 1;
	}

	// If the desired length is equal to 6
	else if (getDesiredLength() == 6)
	{
		spaces = desiredLength + 2;
	}

}

// Set the amount of stars
void HollowSquare::setStars(int rowNum)
{
	// If the row number is equal to zero or the desired length then print an amount of stars equal to the desired length minus 2
	if (rowNum == 0 || rowNum == getDesiredLength() - 1)
	{
		stars = desiredLength - 2;
	}

	// Otherwise print no stars
	else
	{
		stars = 0;
	}
}

// Get the amount of stars
int HollowSquare::getStars()
{
	return stars;
}

// Get the amount of spaces
int HollowSquare::getSpaces()
{
	return spaces;
}

// Get the desired length of the hollow square
int HollowSquare::getDesiredLength()
{
	return desiredLength;
}
