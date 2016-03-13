// Create a square

#pragma once
#include <string>
#include <iostream>

class Square
{
public:

	// Initialize Object
	Square();

	// Deconstructor
	~Square();

	// Ask the user for the dimensions of the sqaure
	void requestDim();

	// Create the square
	void createSquare();

	// Get the amount of stars
	int getStars();

	// Get the desired length of the square
	int getDesiredLength();

private:

	// Shape Variables
	int stars;
	int desiredLength;

	int exitNum;

};

