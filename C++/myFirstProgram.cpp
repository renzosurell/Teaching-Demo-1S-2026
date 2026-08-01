#include <iostream>
using namespace std;

int main() {

    double circumference, radius;
    const double pi = 3.1415;

    cout << endl;
    cout << "\t*** My Circumference Calculator ***" << endl << endl;
    cout << "\t\tPlease Enter the radius: ";
    cin >> radius;

    circumference = 2 * pi * radius;

    cout << endl;
    cout << "\t\tThe circumference of the circle with a radius of " << radius << " is: " << circumference << endl << endl;
    cout << "\t*** Thank you! ***" << endl;
    cout << " ";
}