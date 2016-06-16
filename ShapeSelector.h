// The shape selector class

#pragma once
#include <string>
#include "Triangle.h"
#include "Rectangle.h"
#include "Pyramid.h"
#include "Square.h"
#include "HollowSquare.h"
#include "Star.h"

class ShapeSelector
{
public:

	// Initialize object
	ShapeSelector();

	// Deconstructor
	~ShapeSelector();

	// Get the chosen shape num
	int getChosenShapeNum();

	// Ask the user to choose a shape
	void requestShape();

	// The shape question
	void shapeRequestQuestion();

private:

	// Selection variable
	int shapeChoiceNum = -1;

	int exitNum = 1;

	/*---Shape Object References---*/
	Triangle createdTriangle;
	Rectangle createdRectangle;
	Pyramid createdPyramid;
	Square createdSquare;
	HollowSquare createdHollowSquare;
	Star createdStar;
};

