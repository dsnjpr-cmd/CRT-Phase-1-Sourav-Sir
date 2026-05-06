/*5. WAP in C++ that takes two integers and an operator as an input from the user. Perform the corresponding arthimetic operation on those numbers, without using if else condition.*/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result = " << a + b;
            break;
        case '-':
            cout << "Result = " << a - b;
            break;
        case '*':
            cout << "Result = " << a * b;
            break;
        case '/':
            cout << "Result = " << a / b;
            break;
        default:
            cout << "Invalid operator!";
    }
    return 0;
}