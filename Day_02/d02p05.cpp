//5. WAP in C++ that takes a student's % between 0 to 100 as an input from the user and calculates his/her grade based on following:
//	a. 90 and above
//	b. 80 to 89
//	c. 70 to 79
//	d. 60 to 69
//	e. below 60 fail
#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter student's percentage (0 - 100): ";
    cin >> percentage;

    if (percentage >= 0 && percentage <= 100) {
        if (percentage >= 90) {
            cout << "Grade: A";
        } else {
            if (percentage >= 80) {
                cout << "Grade: B";
            } else {
                if (percentage >= 70) {
                    cout << "Grade: C";
                } else {
                    if (percentage >= 60) {
                        cout << "Grade: D";
                    } else {
                        cout << "Fail";
                    }
                }
            }
        }
    } else {
        cout << "Invalid input! Please enter a value between 0 and 100.";
    }
    return 0;
}