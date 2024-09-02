#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float ans = 0;//not giving correct output on int but is giving correct output on float (due to pow function)
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * (pow(10, i))) + ans;
        n = n >> 1;
        i++;
    }
    cout <<"Answer is:"<< ans;
}