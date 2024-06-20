#include <iomanip>
#include <iostream>

void createRow(const char datatype[], int typesize, const char atleast[])
{
	std::cout << std::setw(16) << datatype
			  << std::setw(2) << typesize
			  << std::setw(16) << " bytes"
			  << std::setw(2) << typesize * CHAR_BIT
			  << std::setw(16) << " bits"
			  << std::setw(2) << atleast << " bits\n";
}

int main()
{
	std::cout << "\nData Type\n";
	std::cout << "1 byte == " << CHAR_BIT << " bits \n\n";

	std::cout << std::left;
	std::cout << std::setw(16) << "DATATYPES "
			  << std::setw(18) << "BYTES" << std::setw(18) << "BITS" << "ATLEAST\n";

	createRow("bool", sizeof(bool), "-");
	createRow("char", sizeof(char), "-");
	createRow("short", sizeof(short), "16");
	createRow("int", sizeof(int), "16");
	createRow("long", sizeof(long), "32");
	createRow("long long", sizeof(long long), "64");
	createRow("float", sizeof(float), "-");
	createRow("double", sizeof(double), "-");
	createRow("long double", sizeof(long double), "-");

	return 0;
}