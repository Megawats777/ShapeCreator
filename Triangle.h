// Creates a upright right sided triangle


#pragma once
#include <string>
class Triangle
{
public:

	// Initialize object
	Triangle();

	// Deconstructor
	~Triangle();

	// Create the triangle
	void createTriangle();

	// Get the amount of spaces
	int getSpaces();

	// Get the amount of stars
	int getStars();

	// Get the rowAmount
	int getRowAmount();

	// Set the rowAmount
	void setRowAmount(int newNum);

	// Ask the user to set the row amount
	void requestRowAmount();

private:

	// Variables
	int stars;
	int spaces;
	int rowAmount;

	int exitNum = 1;

	// Create the triangle spaces
	void createSpaces(int length);

	// Create the triangle stars
	void createStars(int length);
};

