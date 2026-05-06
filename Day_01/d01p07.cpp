/*7. WAP in C++ that takes 3 integers as an input from the user and calculate the total sum of the these variables and find the average.*/
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    float sum, average;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    average = sum / 3;
    
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
    return 0;
}