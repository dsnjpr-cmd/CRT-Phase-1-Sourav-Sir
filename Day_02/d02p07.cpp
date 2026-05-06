//7. WAP in C++ that takes single alphabet character as an input from the user, you have to determine whether its vowel or consonents, don't use if else.
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "It is a vowel.";
            break;
        default:
            cout << "It is a consonant.";
    }
    return 0;
}