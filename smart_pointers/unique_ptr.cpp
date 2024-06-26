#include <iostream>

class Resource
{
public:
	Resource()
	{
		std::cout << "Resource acquired!\n";
	}

	~Resource()
	{
		std::cout << "Resource destroyed!\n";
	}
};

std::unique_ptr<Resource> createResource()
{
	return std::make_unique<Resource>();
}

void print(std::unique_ptr<Resource> &resource1, std::unique_ptr<Resource> &resource2, std::unique_ptr<Resource> &resource3)
{
	std::cout << "START: print()\n";
	std::cout << "resource1 is " << (resource1 ? "not null\n" : "null\n");
	std::cout << "resource2 is " << (resource2 ? "not null\n" : "null\n");
	std::cout << "resource3 is " << (resource3 ? "not null\n" : "null\n");
	std::cout << "END: print()\n";
}

int main()
{
	std::cout << "START: main()\n";

	// create Resource
	std::unique_ptr<Resource> resource1{new Resource{}};

	// start as nullptr
	std::unique_ptr<Resource> resource2{};

	// create Resource from a function
	std::unique_ptr<Resource> resource3{createResource()};

	print(resource1, resource2, resource3);

	// won't compile, copy assignment is disabled
	// resource2 = resource1;

	// resource2 assumes ownership, resource1 is set to null
	resource2 = std::move(resource1);

	std::cout << "Ownership transferred\n";
	print(resource1, resource2, resource3);
	std::cout << "END: main()\n";

	return 0;
}