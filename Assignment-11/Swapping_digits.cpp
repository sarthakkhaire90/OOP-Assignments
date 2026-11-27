#include <iostream>
using namespace std;

template <typename T>
void swapValues(T a, T b) {
    cout <<"Before Swapping: " << a << "," << " " << b << endl;

    T c;
    c = a;
    a = b;
    b = c;

    cout << "After Swpping: " << a << "," << " " << b << endl;
}

int main() {
    cout << "Employee ID: " << endl;
    swapValues(20, 36);
    cout << "Room Numbers: " << endl;
    swapValues(269, 389);
    cout << "Task Priority: " << endl;
    swapValues(8, 5);

    return 0;

}
