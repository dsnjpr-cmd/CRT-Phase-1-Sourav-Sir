/*4. WAP in C++ that takes two integer inputs A and B, multiple A by 4 using bitwise left shift operator and divide B by A using right shift operator.*/
#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Enter value of A: ";
    cin >> A;
    cout << "Enter value of B: ";
    cin >> B;

    A = A << 2;

    int result = B >> A;

    cout << "A after multiplying by 4: " << A << endl;
    cout << "Result of B divided by A using right shift: " << result << endl;
    return 0;
}