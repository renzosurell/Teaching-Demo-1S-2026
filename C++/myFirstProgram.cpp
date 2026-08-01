#include <iostream>
using namespace std;

int main() {

    int x = 6;          //the assignment operator
    cout << "The value of x after initialization:" << x << "\n";
    cout << "\n";

    cout << "The value of x applying increment operator: " << ++x << "\n";
    cout << "The value of x applying decrement operator: " << --x << "\n";

    cout << "\n";

    cout << "The value of x applying post-increment operator: " << x++ << "\n";
    cout << "The value of x after previous statement: " << x << "\n";

    cout << "\n";

    cout << "The value of x applying post-decrement operator: " << x-- << "\n";
    cout << "The value of x after previous statement: " << x << "\n";

    return 0;
}