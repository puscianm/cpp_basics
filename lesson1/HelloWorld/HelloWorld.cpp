#include <iostream>

void variable_initialization() {
	// list initialization - preferred method in modern C++
	int x{ 4 };

	std::cout << "initialized variable (object with identifier[name]) has value " << x << std::endl;

	// value initialization (initializes variable with 0 or empty)
	int y{};

	y = 10;
}

void maybe_unused_variables() {
	// telling compiler that these variables can be unused
	[[maybe_unused]] double pi{ 3.14 };
}


int main()
{
	variable_initialization();
	maybe_unused_variables();
	return 0;
}