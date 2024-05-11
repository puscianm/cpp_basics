#include<iostream> //this includes cout and cin which belongs to the std namespace

//this variable belongs to the global namespace (sometimes also called the global scope)
//this practice should be avoided (declaring variables in global namespace)
int x {0};

int main()
{
    std::cout << "This is executable statement using std namespace with scope resolution operator ::";
    return 0;
}
