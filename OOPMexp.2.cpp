#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;

    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student1;

    student1.name = "Alice Smith";
    student1.rollNumber = 101;

    student1.displayDetails();

    return 0;
}
