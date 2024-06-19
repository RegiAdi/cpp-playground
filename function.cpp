#include <iostream>

// forward declarations are used to tell the compiler about the existence of some
// function that has been defined in a different code file

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
	std::cout << "2 + 1 = " << add(2, 1) << std::endl;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}