#include <iostream>

using namespace std;

int main()
{
    int amount;
    int n100, n50, n20, n1;
    cout << "Enter the amount ";
    cin >> amount;
    switch (1)
    {
    case 1:
        n100 = amount / 100;
        amount -= 100 * n100;

    case 2:
        n50 = amount / 50;
        amount -= 50 * n50;

    case 3:
        n20 = amount / 20;
        amount -= 20 * n20;

    case 4:
        n1 = amount / 1;
        amount -= 1 * n1;
    }
    cout << "Number of 100 Rs Notes are " << n100 << endl;
    cout << "Number of 50 Rs Notes are " << n50 << endl;
    cout << "Number of 20 Rs Notes are " << n20 << endl;
    cout << "Number of 1 Rs Notes are " << n1 << endl;
}