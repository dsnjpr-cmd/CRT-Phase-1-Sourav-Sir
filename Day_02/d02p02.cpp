//2. WAP in C++ that takes age of a person as an integer value input from the user and based on that determines and display the messages using conditional statements:
//	a. If input is from 0 to 17 then print citizen is not eligible to vote.
//	b. If input is more than 17 and less than 61 then print citizen is eligible to vote.
//	c. If input is more than 60 and less than 100 then print senior citizen is eligible to vote. 
//	d. If input is equal to or more than 100 then print century citizen is eligible to vote.
#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 0 && age <= 17) {
        cout << "Citizen is not eligible to vote.";
    }
    else if (age > 17 && age < 61) {
        cout << "Citizen is eligible to vote.";
    }
    else if (age > 60 && age < 100) {
        cout << "Senior citizen is eligible to vote.";
    }
    else if (age >= 100) {
        cout << "Century citizen is eligible to vote.";
    }
    else {
        cout << "Invalid age entered.";
    }
    return 0;
}