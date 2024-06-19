#include <iostream>
#include "square.h"
#include "triangle.h"

int main()
{
	std::cout << "square side: " << getSquareSides() << std::endl;
	std::cout << "square perimeter: " << getSquarePerimeter(9) << std::endl;
	std::cout << "triangle side: " << getTriangleSides() << std::endl;

	return 0;
}