#include <iostream>
using namespace std;

int main() {
    int a, b,sum,sub,mul,div;
    cout << "Enter two integers : ";
    cin >> a >> b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    cout << "Sum: " << sum << endl;
    cout << "Subtraction: " << sub << endl;   
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
    return 0;

}

