#include <iostream>
using namespace std;

template <typename T>

void larger(T a, T b) {
if ( a > b ) {
  cout << "a is greater than b"  << endl;
}

else {
  cout << "b is greater than a"  << endl; 
}
};

int main() {

  larger(40,70);
  larger(67.98,46.96);
  larger(48.66,67.99);
  return 0;
}
