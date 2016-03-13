// Create a rectangle

#pragma once
#include <string>
class Rectangle
{
public:

	// Initialize the object
	Rectangle();

	// Deconstructor
	~Rectangle();

	// Get the number of rows
	int getRowAmount();

	// Get the width
	int getWidth();

	// Set the number of rows
	void setRowAmount(int newNum);

	// Set the width
	void setWidth(int newNum);

	// Create the triangle
	void createRectangle();

	// Ask the user for the width and number of rows
	void requestDim();

private:

	// Variables
	int rows;
	int width;
	int exitNum = -1;

};

