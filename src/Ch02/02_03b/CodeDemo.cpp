// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
int a,b = 5; // one line comment
/*
multi line comments
*/

int main(){
    bool my_flag = true;
    int a = 8;
    int b = 15;
    unsigned positive;
    positive = a - b;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;   
    std::cout << positive << std::endl << std::endl;
    return (0);
}
