#pragma once
#include <string>
#include "Rectangle.h"
#include "Triangle.h"
#include "Pyramid.h"


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
};

