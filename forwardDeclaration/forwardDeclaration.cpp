#include<iostream>

//We do not need to specify variable names but it's good practice
int functionWithForwardDeclaration(int firstVariable, int ScndVariable);

int main(){

    std::cout << "Inside main()\n";
    functionWithForwardDeclaration(1, 2);
    return 0;
}

int functionWithForwardDeclaration(int firstVariable, int ScndVariable)
{
    std::cout << "Inside fucntionWithForwardDeclaration()\n";
}