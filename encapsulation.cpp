// granting access to private data only through controlled public interfaces

#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    int rollNumber;
    string postCode;

    public:
    string firstName;
    string lastName;
    int getRollNumber(){
        return rollNumber;
    }
    void setRollNumber(int rollNumber) {
        this->rollNumber = rollNumber;
    }
    void setPostCode(string postCode){
        this->postCode = postCode;
    }
    void printDetails(){
        cout << firstName << endl << lastName << endl << rollNumber <<endl << postCode << endl;
    }

};

int main() {
    Student s;
    cout << "roll number without accessing via getter " << s.getRollNumber() << endl;
   
    s.setRollNumber(1234); // won't work without setter method because private member. 
    s.setPostCode("IGYP");
    s.firstName = "Parul";
    s.lastName = "Anand";
    
    cout << "Accessing roll number via getter: " << s.getRollNumber() << endl;
    s.printDetails();
}