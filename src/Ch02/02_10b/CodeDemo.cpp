// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;
    flt = -7.66;
    sgn = flt;
    unsgn = sgn;
    std::cout << flt << std::endl;
    std::cout << sgn << std::endl;
    std::cout << (int32_t) unsgn << std::endl;

    int fahrenheit = 101;
    int celsius;
    celsius = ((float) 5 / 9) * (fahrenheit - 32);
    std::cout << fahrenheit << std::endl;
    std::cout << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl << std::endl;
    return (0);
}
