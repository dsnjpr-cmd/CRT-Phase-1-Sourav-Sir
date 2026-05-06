/*3. WAP in C++ that takes 3 integer inputs representing the sides of a triangle, print true if the triangle is equilateral otherwise false, do this using only logical and relational operator.*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}