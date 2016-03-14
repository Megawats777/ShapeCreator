// Create a hollow square

#pragma once
#include <string>
#include <iostream>

class HollowSquare
{
public:

	// Initialize Object
	HollowSquare();

	// Deconstructor
	~HollowSquare();

	// Create the hollow square
	void createHollowSquare();

	// Ask the user for the dimensions of the square
	void requestDim();

	// Set the amount of stars
	void setStars(int rowNum);

	// Set the amount of spaces
	void setSpaces(int rowNum);

	// Get the stars of the square
	int getStars();

	// Get the spaces of the square
	int getSpaces();

	// Get the desired length of the square
	int getDesiredLength();

private:

	// Shape Variables
	int stars;
	int spaces;
	int desiredLength;

	int exitNum;

};

