#include <iostream>
using namespace std;

int main() {

    int x = 3;

    cout << (x << 1) << "\n";   //Bitwise left-shift
    cout << (x >> 1) << "\n";   //Bitwise right-shift
    cout << (x | 1) << "\n";   //Bitwise Or
    cout << (x & 1) << "\n";   //Bitwise And
    cout << (x ^ 1) << "\n";   //Bitwise XOr

    return 0;
}