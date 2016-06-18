// The star shape class

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Star
{
public:
	// Initialize the object
	Star();

	// Deinitialize the object
	~Star();


	/*--The public functionality of the class--*/
	
	// Create the star
	void createStar();

	// Request the star length
	void requestStarLength();

	// Print stars
	void printStars(int rowNum);

	// Print spaces
	void printSpaces(int rowNum);

	// Print a new line
	void printNewLine();

	// Set the amount of spaces for the next line
	void setNewSpaceAmount(int rowNum);

	// Set the amount of stars for the next line
	void setNewStarAmount(int rowNum);

	// The exit message
	void exitMessage();

private:

	/*--The private properties of the class--*/

	// int requested length
	int requestedLength = 2;

	// The amount of stars
	int stars;

	// The amount of spaces
	int spaces;

	// The exit number
	int exitNum = -1;
};

