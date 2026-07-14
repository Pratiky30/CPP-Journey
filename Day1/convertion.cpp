#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;
    cout << "Temperature in Fahrenheit: " << (temperature * 9/5) + 32 << endl;
    cout << "Temperature in Kelvin: " << temperature + 273.15 << endl;
    return 0;
}
