#include <iostream>
using namespace std;

int main() {
    double length, width, area;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    area = length * width;

    cout << "Area of rectangle: " << area << endl;

    cout << "Now for Square calculation." << endl;

    double side, square_area;
    cout << "Enter side length: ";  
    cin >> side;
    square_area = side * side;
    cout << "Area of square: " << square_area << endl;
    return 0;
}

