/*6. WAP in C++ that takes two integer input from the user swap their values using temporary variable and print the updated value without using swap function.*/
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two integers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}