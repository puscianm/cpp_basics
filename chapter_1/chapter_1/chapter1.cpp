#include <iostream>

void lesson_1_4_variable_initialization() {
	std::cout << "--------lesson 1.4--------" << '\n';

	// list initialization - preferred method in modern C++
	int x{ 4 };

	std::cout << "initialized variable (object with identifier[name]) has value " << x << '\n';

	// value initialization (initializes variable with 0 or empty)
	int y{};

	y = 10;

	// telling compiler that these variables can be unused
	[[maybe_unused]] double pi{ 3.14 };

}

void lesson_1_5_cout_cin() {
	std::cout << "--------lesson 1.5--------" << '\n';

	std::cout << "This string is passed to the cout variable" << std::endl;
	std::cout << "Outputing cout to console typically happens in batches." << '\n';
	std::cout << "It's better to use backslash n than endl" << "\n \n";

	std::cout << "Please enter a number and press enter" << '\n';
	int user_varaible{};
	std::cin >> user_varaible;
	std::cout << "User inputed: " << user_varaible << '\n';

}

void lesson_1_6_uninitialized_variables() {
	std::cout << "--------lesson 1.6--------" << '\n';
	//int unitialized_variable;
	//std::cout << unitialized_variable;
}

void lesson17KewordAndNamingIndentifiers() {
	std::cout << "--------lesson 1.7--------" << '\n';

	//we use small letters for variables and functions
	//we use capital letters for user defined types like classes or structs

	//good variable and function names
	int coins{};
	std::cout << coins;
	int coinsCount();

	//good practice is to describe in comment above what variable is used for. E.g.

	// Length of boat in centimeters. Measured from bow to stern.
	int boatLength {};
}


int main()
{
	lesson_1_4_variable_initialization();
	//lesson_1_5_cout_cin();
	lesson_1_6_uninitialized_variables();
	lesson17KewordAndNamingIndentifiers();
	return 0;
}