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
    swapValues(26, 76);
    swapValues(376, 289);
    swapValues(7, 9);

    return 0;

}
