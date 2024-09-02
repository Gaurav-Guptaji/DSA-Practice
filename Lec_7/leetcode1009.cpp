// naive approach
#include<math.h>
class Solution {
public:
    int bitwiseComplement(int n) {
        int i = 0;
        int ans = 0;
        int digit1;
        int x1;
        int x=0;
        int j=0;
        if(n==0){
            return 1;
        }
        else{
         //finding complement of bits   
        while(n!=0){
            int bit=n&1;
            if(bit==0){
                digit1=1;
            }
            else{
                digit1=0;
            }
            n=n>>1;
            x=(digit1*pow(10,j))+x;
            j++;
            x1=x;
        }
    //converting obtained bits in decimal    
    while (x1 != 0)
    {
        int digit2 = x1 % 10;
        if (digit2 == 1)
        {
            ans += pow(2, i);
        }
        x1=x1/10;
        i++;
    }

    return ans;
        }
        
    }
};