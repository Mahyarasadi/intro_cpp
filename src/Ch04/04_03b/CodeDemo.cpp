// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>
int main(){
    int numbers[] = {12, 25, 31, 47, 58};
    std::vector<int> array = {12, 25, 31, 47, 58};
    int i = 0;
    int len = sizeof(numbers) / sizeof(numbers[0]);
    while (i< len){
        std::cout << "Array Size" << len << "i" << i << std::endl;
        i ++;
    }
    for (int i=0;i<array.size(); i++)
    {std::cout << "Vector Size" << array.size() << "i" << i << std::endl;}
    std::cout << std::endl << std::endl;
    return (0);
}
