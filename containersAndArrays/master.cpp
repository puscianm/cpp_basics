#include<iostream>
#include<vector>

int main()
{
    /*
    C++ has 3 primary array types:
        1. c-style arrays
        2. std::vector
        3. std::array
    */

    int myInt {20};
    std::cout << &myInt << '\n';
    std::vector<int> myVector(5);
    
    for(std::vector<int>::size_type i =0; i<myVector.size(); i++)
    {
        std::cout << "element " << i << " of myVector is " << myVector[i] << " with memory adress " << &(myVector[i]) << '\n';
    }
    return 0;
}
