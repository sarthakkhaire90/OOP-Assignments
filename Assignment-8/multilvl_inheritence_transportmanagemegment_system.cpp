#include <iostream>
using namespace std;

class Person {
public:
    string org_name;
    int gst_id;

    void display() {
        cout << "Name of organization: " << org_name << endl;
        cout << "GST ID: " << gst_id << endl;
    }
};

class Employee : public Person {
public:
    string name;
    int id;

    void employee() {
        cout << "Name of Employee: " << name << endl;
        cout << "ID Number: " << id << endl;
    }
};

class Manager : public Employee {
public:
    string post;

    void manager() {
        cout << "Post: " << post << endl;
    }
};

int main() {
    Manager m1;

    m1.org_name = "apple";
    m1.gst_id = 1234;
    m1.name = "stive job";
    m1.id = 6789;
    m1.post = "CEO";

    m1.display();
    m1.employee();
    m1.manager();

    return 0;
}
