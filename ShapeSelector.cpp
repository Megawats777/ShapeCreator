#include "ShapeSelector.h"
#include <string>
#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

// Initialize object
ShapeSelector::ShapeSelector()
{
	
}

// Deconstructor
ShapeSelector::~ShapeSelector()
{

}

// Get the chosen shape num
int ShapeSelector::getChosenShapeNum()
{
	return shapeChoiceNum;
}

// Ask the user to choose a shape
void ShapeSelector::requestShape()
{
	// While exit num is not equal to zero create the shapes and ask the user for more
	while (shapeChoiceNum != 0)
	{
		// Ask the user to select a shape
		shapeRequestQuestion();

		// Select a shape depending on the number
		if (shapeChoiceNum == 1)
		{
			createdTriangle.createTriangle();
		}
		else if (shapeChoiceNum == 2)
		{
			createdRectangle.createRectangle();
		}
		else if (shapeChoiceNum == 3)
		{
			createdPyramid.createPyramid();
		}
		// If the none of the shape number's were pressed then re ask the question
		else
		{
			cout << "" << endl;
			cout << "Invalid Entry" << endl;
			cout << "" << endl;
			continue;
		}
	}
}

// The shape request question
void ShapeSelector::shapeRequestQuestion()
{
	// Ask the user to select a shape
	cout << "" << endl;
	cout << "Press the following number to create a shape or press 0 to exit." << endl;
	cout << "1. Triangle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "3. Pyramid" << endl;
	cout << "Selection: ";
	cin >> shapeChoiceNum;
}