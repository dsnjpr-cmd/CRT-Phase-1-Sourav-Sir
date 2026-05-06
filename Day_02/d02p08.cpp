//8. WAP in C++ that create a basic customer support system, it should take an integer input from the user representing their choice and display corresponding message using switch statement:
//	a. press 1 for support
//	b. press 2 for billing
//	c. press 3 for technical issue
//	d. press 0 for taking to an agent
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Customer Support System\n";
    cout << "Press 1 for Support\n";
    cout << "Press 2 for Billing\n";
    cout << "Press 3 for Technical Issue\n";
    cout << "Press 0 to Talk to an Agent\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Support. Please wait while we connect you to support services.\n";
            break;
        case 2:
            cout << "You selected Billing. Redirecting to billing department.\n";
            break;
        case 3:
            cout << "You selected Technical Issue. Our technical team will assist you shortly.\n";
            break;
        case 0:
            cout << "Connecting you to a live agent. Please hold.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }
    return 0;
}