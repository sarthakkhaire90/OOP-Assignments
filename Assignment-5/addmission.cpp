#include <iostream>
using namespace std;

class Student {
    string name;
    int year;
    int age;
    string course;

public:
    Student(string name, int year, int age, string course) {
        this->name = name;
        this->year = year;
        this->age = age;
        this->course = course;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "year: " << year<< endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s("sarthak", 2026, 18, "AIML");

    s.display();

    return 0;
}
