// The star shape class

#include "Star.h"


// Initialize the object
Star::Star()
{
}

// Deinitialize the object
Star::~Star()
{
}

// Request star length
void Star::requestStarLength()
{
	// Get the star length
	cout << "Set a number for the star length: ";
	cin >> requestedLength;

	// Print a new line
	printNewLine();

}

// Create the star
void Star::createStar()
{
	// While the exit number is not 0 keep making stars
	while (exitNum != 0)
	{
		// Print a new line
		printNewLine();

		// Set the default amount of spaces
		spaces = 3;

		// Set the default amount of stars
		stars = 1;

		// Print the star
		for (int rl = 0; rl < 7; rl++)
		{
			// Print spaces
			printSpaces(rl);

			// Print stars
			printStars(rl);

			// Set the amount of spaces for the next line
			setNewSpaceAmount(rl);

			// Set the amount of stars for the next line
			setNewStarAmount(rl);

			// Print a new line
			printNewLine();
		}

		// The exit message
		exitMessage();
	}
}

// Print spaces
void Star::printSpaces(int rowNum)
{
	for (int sp = 0; sp < spaces; sp++)
	{
		cout << " ";
	}
}

// Print stars
void Star::printStars(int rowNum)
{
	for (int st = 0; st < stars; st++)
	{
		cout << "*";
	}
}

// Print a new line
void Star::printNewLine()
{
	cout << " " << endl;
}

// The exit message
void Star::exitMessage()
{
	// Print a new line
	printNewLine();

	// Print the exit message
	cout << "Press 0 to exit, Press another number to continue: ";
	cin >> exitNum;

	// Print a new line
	printNewLine();
}

// Set the amount of spaces for the next line
void Star::setNewSpaceAmount(int rowNum)
{
	// If the current row is below 4 decrease the amount of spaces
	if (rowNum < 3)
	{
		spaces--;
	}

	// Otherwise increase the amount of spaces
	else
	{
		spaces++;
	}
}

// Set the amount of stars for the next line
void Star::setNewStarAmount(int rowNum)
{
	// If the current row is below 4 increase the amount of stars
	if (rowNum < 3)
	{
		stars += 2;
	}

	// Otherwise decrease the amount of stars
	else
	{
		stars -= 2;
	}
}