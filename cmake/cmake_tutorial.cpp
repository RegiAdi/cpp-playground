#include <iostream>
#include "square.h"

int main()
{
	std::cout << "Hello World!" << std::endl;
	std::cout << "Square Sides: " << getSquareSides() << std::endl;
	std::cout << "Square Perimeter: " << getSquarePerimeter(5) << std::endl;

	return 0;
}