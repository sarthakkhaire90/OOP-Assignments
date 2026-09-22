#include<iostream>
using namespace std;

class employee
{
public:
    int employeeId;
    string employee_name;
    string department;
    float salary;

    void input()
    {
        cout<<"Enter Employee ID: ";
        cin>>employeeId;

        cout<<"Enter Employee Name: ";
        cin>>employee_name;

        cout<<"Enter Department: ";
        cin>>department;

        cout<<"Enter Employee Salary: ";
        cin>>salary;
    }

    void display()
    {
        cout<<"-----EMPLOYEE DETAILS-----"<<endl;
        cout<<"Employee ID: "<<employeeId<<endl;
        cout<<"Employee Name: "<<employee_name<<"\n";
        cout<<"Department: "<<department<<"\n";
        cout<<"Employee Salary: "<<salary;
    }
};

int main()
{
    employee e1;

    e1.input();
    e1.display();

    return 0;
}
