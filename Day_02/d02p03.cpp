//3. WAP in C++ takes two integers as an input from the user and finds the maximum using ternary conditional operator.
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int max = (num1 > num2) ? num1 : num2;

    cout << "Maximum number is: " << max << endl;
    return 0;
}