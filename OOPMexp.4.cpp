#include <iostream>
using namespace std;

class Student {
private:
    int id; 

protected:
    int marks; 

public:
    void setData(int studentId, int studentMarks) {
        id = studentId;
        marks = studentMarks;
    }

    void displayData() {
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student obj;

    obj.setData(101, 85);
    
    obj.displayData();

    return 0;
}
