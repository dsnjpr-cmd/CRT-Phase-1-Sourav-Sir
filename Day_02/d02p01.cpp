//1. WAP in C++ that takes a person A as an input from the user and if the person is more than 18 years old then print voter is eligible.
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age > 18) {
        cout << "Voter is eligible." << endl;
    } else {
        cout << "Voter is not eligible." << endl;
    }
    return 0;
}