// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

int main(){
    int a = 37;
    int *ptr;
    ptr = &a; 
    std::cout << "content of a is: " << a << std::endl;
    std::cout << "pointer of a or ptr is: " << ptr << std::endl;
    std::cout << "address of a is: " << &a << std::endl;
    std::cout << "where pointer is pointing to: " << *ptr << std::endl;
    std::cout << "The address of pointer: " << &ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
