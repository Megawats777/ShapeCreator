// Create a pyramid

#pragma once
#include <iostream>
#include <string>

class Pyramid
{
public:

	// Initialize object
	Pyramid();

	// Deconstructor
	~Pyramid();

	// Create the pyramid
	void createPyramid();

	// Ask the user for the dimensions
	void requestDim();

	// Create the spaces of the pyramid
	void createSpaces(int spaceAmount);

	// Create the stars of the pyramid
	void createStars(int starsAmount);

	// Get the number of stars
	int getStars();

	// Get the number of spaces
	int getSpaces();

	// Get the desiredLength of the pyramid
	int getDesiredLength();

private:

	// Shape variables
	int stars;
	int spaces;
	int desiredLength;

	int exitNum;

};

