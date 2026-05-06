//1. WAP in C++ that takes an integer as an input from the user, print all 1 to 10 number that is divisible by 2.
#include <iostream>
using namespace std;

int main() {

    cout << "Q1. Numbers from 1 to 10 divisible by 2:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;