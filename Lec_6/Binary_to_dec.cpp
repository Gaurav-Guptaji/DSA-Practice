#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        // int bit=n&1; if in input it was given as string than we can take bit also otherwise
        // for int we have to take each digit (treated as binary digit)
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        //n=n >> 1;  in case of bit
        n=n/10;
        i++;
    }
    cout << ans << endl;
}