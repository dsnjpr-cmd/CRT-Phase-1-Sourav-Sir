//1. WAP in C++ that takes an integer value in celsius as an input from the user and convert it into fahrenheit and print the output.
#include <iostream>
using namespace std;

int main() {
    int cel, far;
    cout << "Enter temperature in Celsius: ";
    cin >> cel;
    far = (9.0 / 5) * cel + 32;
    cout << "Temperature in Fahrenheit: " << far << endl;
    return 0;
}