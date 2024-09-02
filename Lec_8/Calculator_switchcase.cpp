#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cout << "Enter two integers" << endl;
    cin >> a >> b;
    cout << "Enter the operator ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Sum is " << a + b << endl;
        break;
    case '-':
        cout << "Difference is " << a - b << endl;
        break;
    case '*':
        cout << "Product is " << a * b << endl;
        break;
    case '/':
        cout << "Division is " << a / b << endl;
        break;
    default:
        cout << "Enter a valid operator" << endl;
    }
}