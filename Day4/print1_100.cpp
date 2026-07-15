#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; ++i) {
        cout << i ;
        cout << endl;
    }
    for (int i = 100; i >= 1; --i) {
        cout << i ;
        cout << endl;
    }
    cout << "Enter the Number to get added: ";
    int num,sum = 0;
    cin >> num;

    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl;

    return 0;
}