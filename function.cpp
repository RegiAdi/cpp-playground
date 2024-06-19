#include <iostream>

// forward declarations are used to tell the compiler about the existence of some
// function that has been defined in a different code file

int add(int x, int y); // forward declaration of add() (using a function declaration)

// reorder the function definitions so subtract is defined before main
int subtract(int x, int y)
{
	return x - y;
}

int main()
{
	std::cout << "2 + 1 = " << add(2, 1) << std::endl;
	std::cout << "4 - 2 = " << subtract(4, 2) << std::endl;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}