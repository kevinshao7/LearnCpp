#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
/*Often see function decaration before main and function definition after main
function pass by reference can change value of arguments
function overloading can have same name if parameter types are different
class access specifier public, private, protected
protected can be accessed in inherited classses, private by default
Encapsulation (make private if possible) good practice

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

can have multilevel and multiple inheritance
polymorhism function overriding

*/

struct car { //structure is group of variables
    string brand;
    string model;
    int year;
};
int main(){
    // Put data into the first structure
car myCar1;
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

car myCar2;
// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

car &bestcar = myCar1; //reference
}