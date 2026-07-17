#include <iostream>
using namespace std;

int prime(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (prime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}

int prime(int n) {
    if (n <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}