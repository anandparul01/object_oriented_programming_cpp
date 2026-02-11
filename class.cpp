#include <iostream>
using namespace std;
// class - describes the structure
class Person{
    public:
    string name; //data member/ variable 1
    string surname; // data member/ variable 2

    //methods - functions defined in the class
    void printFullName(){ 
        cout << name << " " << surname << endl;
    }
};

int main() {
    // object - specific example of that structure.. also called instance. eg p and p2 in this case
    Person p; // instantiating an object of the class Person
    p.name = "Parul";
    p.surname = "Anand";

    p.printFullName();

    Person p2;
    p2.name = "John";
    p2.surname = "Doe";

    p2.printFullName();
}