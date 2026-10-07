#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // 1. DEFAULT CONSTRUCTOR
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    // 2. PARAMETERIZED CONSTRUCTOR
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    // 3. COPY CONSTRUCTOR
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << "\n" << endl;
    }
};

int main() {
    Student student1;
    cout << "Student 1 details: ";
    student1.display();

    Student student2("Alex", 20);
    cout << "Student 2 details: ";
    student2.display();

    Student student3 = student2; 
    cout << "Student 3 (copied from Student 2) details: ";
    student3.display();

    return 0;
}
