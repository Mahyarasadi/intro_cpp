// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];
    age[0] = 25;
    age[1] = 26;
    age[2] = 27;
    float temperatures[] = {31.5, 23.5, 65.3, 36.5};
    //age[3] = 28;
    std::cout << age[0] << std::endl;
    std::cout << age[1] << std::endl;
    std::cout << age[2] << std::endl;
    std::cout << age[3] << std::endl;
    // print temperatures
    std::cout << temperatures[0] << std::endl;
    std::cout << temperatures[1] << std::endl;
    std::cout << temperatures[2] << std::endl;
    std::cout << temperatures[3] << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
