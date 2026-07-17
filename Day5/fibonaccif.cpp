#include <iostream>
using namespace std;

int fib(int number);
int main() {
    int number;
    cout << "Enter the number of terms: ";
    cin >> number;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < number; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}

int fib(int number) {
    if (number <= 1)
        return number;
    return fib(number - 1) + fib(number - 2);
}