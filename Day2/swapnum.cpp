#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter 2 numbers: ";
    cin >> a >> b;

    // Swapping with the help of a temporary variable
    c = a;
    a = b; 
    b = c;

    cout << "The swapped numbers are: a = " << a << ", b = " << b << endl;
}