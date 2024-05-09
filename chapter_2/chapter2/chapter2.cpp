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

void function_inside_main() {

    int x{ 5 };
    int y{ 6 };

    std::cout << "function_inside_main has no idea about varaibles x and y from main. x = " << x << " y = " << y << '\n';
}

int main()
{
    //std::cout << "Doubled user input is: " << doubleNumber(getUserInput());

    int x { 2 };
    int y { 4 };

    std::cout << "x and y are here from main. x = " << x << " y = " << y << '\n';

    function_inside_main();

    std::cout << "And we are back inside main. x = " << x << " y = " << y << '\n';
}
