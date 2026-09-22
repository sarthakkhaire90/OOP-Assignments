#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentname;
    int rollno;
    int div;
    float marks;

public:
    void input() {
        studentname = "sarthak";
        rollno = 25;
        div = 2;
        marks = 96;
    }

    void display() {
        cout << "Student Name : " << studentname << endl;
        cout << "Roll No   : " << rollno << endl;
        cout << "div : " << div << endl;
        cout << "marks   : " << marks << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}
