
#include <iostream>
using namespace std;

class University {
public:
    string name;
    int age;
    long long Mobile_Number;

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Mobile No.: " << Mobile_Number << endl;
    }
};

class student : public University {
public:
    int rollno;
    string branch;

    void info() {
        cout << "RollNo: " << rollno << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    student s1;

    s1.name = "sarthak";
    s1.age = 18;
    s1.Mobile_Number = 123456670;
    s1.rollno = 25;
    s1.branch = "AIML";

    s1.display();
    s1.info();

    return 0;
}
