// The star shape class

#pragma once

#include <iostream>
#include <string>

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

	// Print stars
	void printStars();

	// Print spaces
	void printSpaces();

private:

	/*--The private properties of the class--*/

	// The amount of stars
	int stars;

	// The amount of spaces
	int spaces;

	// Is the star creation at the half way point
	bool isCreationAtHalfWayPoint = false;

	// The exit number
	int exitNum = -1;
};

