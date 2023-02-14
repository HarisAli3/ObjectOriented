#include <iostream>
using namespace std;


void add(int a, int b) {
    cout << "Additon of Numbers:" << a + b << endl;
}
void sub(int a, int b) {
    cout << "Subtraction of Numbers:" << a - b << endl;
}
void mult(int a, int b) {
    cout << "Multiplication of Numbers:" << a * b << endl;
}
void division(int a, int b) {
    cout << "Division of Numbers:" << (a / b) << endl;
}
int main()
{
    int a, b;
    cout << "Enter Number 1:";
    cin >> a;
    cout << "Enter Number 2:";
    cin >> b;
    add(a, b);
    sub(a, b);
    mult(a, b);
    division(a, b);
}
