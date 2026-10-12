
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
        cout << "Employee record created" << endl;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }

    ~Employee() {
        cout << "Employee record removed from memory" << endl;
    }
};

int main() {
    Employee e1("sarthak", 25);
    e1.display();
    return 0;
}
