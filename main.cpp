#include <iostream>
#include <string>
#include "Triangle.h"
#include "Rectangle.h"
#include "ShapeSelector.h"
using namespace std;

int main()
{
	// Exit number
	int exitNum = 1;

	// Reference to the triangle object
	Triangle createdTriangle;

	// Reference to the rectangle object
	Rectangle createdRectangle;

	// Reference to the shape selector object
	ShapeSelector createdShapeSelector;

		/*---Create the shape---*/
	createdShapeSelector.requestShape();

	return 0;
}