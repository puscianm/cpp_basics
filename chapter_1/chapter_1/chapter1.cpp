#include <iostream>

void lesson_1_4_variable_initialization() 
{
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

void lesson_1_5_cout_cin() 
{
	std::cout << "--------lesson 1.5--------" << '\n';

	std::cout << "This string is passed to the cout variable" << std::endl;
	std::cout << "Outputing cout to console typically happens in batches." << '\n';
	std::cout << "It's better to use backslash n than endl" << "\n \n";

	std::cout << "Please enter a number and press enter" << '\n';
	int user_varaible{};
	std::cin >> user_varaible;
	std::cout << "User inputed: " << user_varaible << '\n';

}

void lesson_1_6_uninitialized_variables() 
{
	std::cout << "--------lesson 1.6--------" << '\n';
	//int unitialized_variable;
	//std::cout << unitialized_variable;
}

void lesson17KewordAndNamingIndentifiers() 
{
	std::cout << "--------lesson 1.7--------" << '\n';

	//we use small letters for variables and functions
	//we use capital letters for user defined types like classes or structs

	//good variable and function names
	int coins{};
	std::cout << coins << '\n';
	int coinsCount();

	//good practice is to describe in comment above what variable is used for. E.g.

	// Length of boat in centimeters. Measured from bow to stern.
	[[maybe_unused]] int boatLength {};
}

void lesson19() 
{
	std::cout << "--------lesson1.9--------" << '\n';

	[[maybe_unused]] int x { 5 }; // x is variable, 5 is literal


	// These lines do completly different things
	std::cout << 5 << '\n';
	std::cout << x << '\n';

	// When compiler sees first line, it will create executable that prints value 5 into console
	// When compiler sees second line, it will create executable that fetches value from memory assigned to x and then print it.
	

	std::cout << 5 + 7 << '\n'; //This is operator+. It is binary, meaning it takes two arguments.

	//An operator (or function) that has some observable effect beyond producing a return value is said to have a side effect. 
	// For example, when x = 5 is evaluated, the assignment operator has the side effect of assigning the value 5 to variable x.
}

void summaryChapter()
{
	std::cout << "--------summaryChapter--------" << '\n';

	std::cout << "Enter an integer: ";

	int userInputFirst{ };
	std::cin >> userInputFirst;

	std::cout << "Enter another integer: ";
	
	int userInputSecond{ };
	std::cin >> userInputSecond;

	std::cout << userInputFirst << " + " << userInputSecond << " is " << userInputFirst + userInputSecond << ".\n";
	std::cout << userInputFirst << " - " << userInputSecond << " is " << userInputFirst - userInputSecond << ".\n";
}


int main()
{
	lesson_1_4_variable_initialization();
	//lesson_1_5_cout_cin();
	lesson_1_6_uninitialized_variables();
	lesson17KewordAndNamingIndentifiers();
	summaryChapter();
	return 0;
}