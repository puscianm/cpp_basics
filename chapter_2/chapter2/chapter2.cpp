#include <iostream>

int doubleNumber(int num)
{
    return 2 * num;
}

int getUserInput()
{
    std::cout << "Input integer: ";

    int userInput{ };
    std::cin >> userInput;

    return userInput;
}

int main()
{
    std::cout << "Doubled user input is: " << doubleNumber(getUserInput());
}
