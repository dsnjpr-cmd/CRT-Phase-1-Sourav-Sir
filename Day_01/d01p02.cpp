/*2. WAP in C++ that takes a global integer variable initialize to 100, in the main function take an integer input from the user, perform floating point division of the global variable by the user input using explicit type casting and store in a local double variable then print the result.*/
#include <iostream>
using namespace std;

int globalVar = 100;

int main() {
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;
    
    double result = (double)globalVar / userInput;

    cout << "Result after division: " << result << endl;
    return 0;
}