#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "Your grade is A." << endl;
    } else if (grade >= 80 && grade < 90) {
        cout << "Your grade is B." << endl;
    } else if (grade >= 70 && grade < 80) {
        cout << "Your grade is C." << endl;
    } else if (grade >= 60 && grade < 70) {
        cout << "Your grade is D." << endl;
    } else if (grade >= 0 && grade < 60) {
        cout << "Your grade is F." << endl;
    } else {
        cout << "Invalid grade entered. Please enter a number between 0 and 100." << endl;
    }
    return 0;
}