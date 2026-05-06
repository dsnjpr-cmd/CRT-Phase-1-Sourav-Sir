//4. WAP in C++ that takes an integer as an input from the user of n and print all the numbers 1 to n but skips the numbers who are multiple of 4 using continue statement.
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 4 == 0) {
            continue; // skip multiples of 4
        }
        cout << i << " ";
    }
    return 0;
}