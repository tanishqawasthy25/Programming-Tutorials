#include "Shape.h"

// You'll notice the implementation of these classes is just like usual
// no "virtual" keywords or anything like that

// Doesn't do a thing!
void SHAPE::draw() { return; }

// The TRIANGLE dra method draws an ASCII triangle
void TRIANGLE::draw()
{
	cout << "  *  " << endl;
	cout << " * * " << endl;
	cout << "*****" << endl;

	cout << endl;
}

// The SQUARE draw method draws an ASCII square
void SQUARE::draw()
{
	cout << "******" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "******" << endl;

	cout << endl;
}