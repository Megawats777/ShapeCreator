#include "Pyramid.h"
#include <iostream>
#include <string>
using namespace std;

// Initialize Object
Pyramid::Pyramid()
{
	exitNum = 1;
	desiredLength = 0;
}

// Deconstructor
Pyramid::~Pyramid()
{

}

// Ask the user for the dimensions of the pyramid
void Pyramid::requestDim()
{
	// Create new line
	cout << "" << endl;

	// Ask the user to enter the desired length of the pyramid
	cout << "Please enter the length of the pyramid: ";
	cin >> desiredLength;

	// Create new line
	cout << "" << endl;

}

// Create the pyramid
void Pyramid::createPyramid()
{
	// While exitNum is not equal to 0 then ask the user to enter the dimensions of the pyramid and create them
	while (exitNum != 0)
	{
		// Ask the user to enter the length of the pyramid
		requestDim();

		// Set the initial amount of stars
		stars = 1;

		// Set the initial amount of spaces
		spaces = desiredLength * 2;

		// Create the pyramid
		for (int rows = 0; rows < getDesiredLength(); rows++)
		{
			// Create the spaces
			createSpaces(getSpaces());

			// Create the stars
			createStars(getStars());

			// Decrease the amount of spaces
			spaces -= 2;

			// Increase the amount of stars
			stars += 4;

			// Create a new line
			cout << "" << endl;
		
		}
	
		// Create new line
		cout << "" << endl;

		// Ask the user if they want to exit
		cout << "Press 0 to exit creating this shape: ";
		cin >> exitNum;

	}

	// Reset exitNum
	exitNum = 1;

}

// Create the spaces
void Pyramid::createSpaces(int spaceAmount)
{
	for (int sp = 0; sp < spaceAmount; sp++)
	{
		cout << " ";
	}
}

// Create the stars
void Pyramid::createStars(int starsAmount)
{
	for (int st = 0; st < starsAmount; st++)
	{
		cout << "*";
	}
}

// Get number of spaces
int Pyramid::getSpaces()
{
	return spaces;
}

// Get the number of stars
int Pyramid::getStars()
{
	return stars;
}

// Get the number the desired length
int Pyramid::getDesiredLength()
{
	return desiredLength;
}
