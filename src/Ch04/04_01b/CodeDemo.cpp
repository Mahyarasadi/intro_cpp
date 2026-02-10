// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1001;
    bool flag = true;
    char lttr = 'n';
    if ((a%2) == 0)
        {std::cout << "it is even" << std::endl;}
    else
        {std::cout << "it is odd" << std::endl;}
    if (lttr != 'a' && lttr != 'e' && lttr != 'o' & lttr != 'u' )
        {std::cout << "it is not vowel" << std::endl;
        std::cout <<  flag << std::endl;}
    else
        {std::cout << "it is vowel" << std::endl;}
    std::cout << std::endl << std::endl;
    return (0);
}
