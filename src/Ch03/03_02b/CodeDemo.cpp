// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
public:
    cow(std::string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    };
    std::string get_name() const{
        return (name);
    };
    int get_age() const {
        return (age);
    };
    cow_purpose get_purpose() const {
        return (purpose);
    };
    void set_age(int new_age) {
        age = new_age;
    };
    void set_name(std::string new_name) {
        name = new_name;
    };
    void set_purpose(cow_purpose new_purpose) {
        purpose = new_purpose;
    };
private:
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Betsy", 5, cow_purpose::dairy);
    my_cow.set_age(12);
    my_cow.set_name("Henry");
    my_cow.set_purpose(cow_purpose::hide);
    std::cout << my_cow.get_age() << my_cow.get_name() << std::endl;
    std::cout << (int) my_cow.get_purpose() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
