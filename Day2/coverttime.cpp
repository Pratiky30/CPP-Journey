#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, m, s;

    cout << "Enter time in Seconds: ";
    cin >> s;

    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;

    cout << "Time in HH:MM:SS format is: "
         << setfill('0') << setw(2) << h << ":"
         << setw(2) << m << ":"
         << setw(2) << s << endl;

    return 0;
}