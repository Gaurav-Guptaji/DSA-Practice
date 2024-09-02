//Ans 1 >
/* Exit() -> When I call return in main(), destructors will be called for my locally scoped objects.
  If I call exit(), no destructor will be called for my locally scoped objects.exit() does not return anything . 
   That means that once I call it, Any objects that you've created in that function will not be destroyed. 
   Often this has no implications, but sometimes it does, like closing files .*/

//Ans 2 >
/* Continue() -> Important rule while using continue statement is that, We can use continue statement only within the loops. 
Switch case is conditional block not a loop so we cannot execute the continue statement inside switch.*/

//Ans 3 > 
#include <iostream>

using namespace std;

int main() {

    int amount{};
    cin >>  amount;
    int currencyValue [4] = {100, 50, 20, 1};
    int rupeeCount{}, iterator{};
    
    while(amount != 0){
        if(amount >= currencyValue[iterator])
        {
            rupeeCount =  amount / currencyValue[iterator];
            amount = amount % currencyValue[iterator];
            
            // This commented Line will do the all the job of switch case;
            // cout << rupeeCount <<" ₹"<<currencyValue[iterator]<<" Note Will Be Required" << endl;
        
            switch(currencyValue[iterator]){
                case 100: cout << rupeeCount <<" ₹100 Note Will Be Required" << endl;
                break;
                
                case 50: cout << rupeeCount <<" ₹50 Note Will Be Required" << endl;
                break;
                
                case 20: cout << rupeeCount <<" ₹20 Note Will Be Required" << endl;
                break;
                
                case 1: cout << rupeeCount <<" ₹1 Note Will Be Required" << endl;
                break;
            }
        }
        iterator++;
    }
}

/*Ans 4 > 
    int nthTermOfAp{};
    cin >> nthTermOfAp;
    cout << 3 * nthTermOfAp + 7 << endl;
 */   

//Ans 5 > 
#include <iostream>
using namespace std;

int BitCounter(int value){
    int counter{0};
    while(value !=0 ){
        (value&1)?counter++:false;
        value = value >> 1;
    }
    return counter;
}

int main() {
    int value1{7}, value2{5}, totalSetBits{0};
    totalSetBits+= BitCounter(value1);
    totalSetBits+= BitCounter(value2);
    cout << "No of total set bits in both values are =  "<< totalSetBits <<"."<<endl;
}

//Ans 6 >
 
#include <iostream>
using namespace std;

int fib(int value){
    int a{0}, b{1}, newFib{0}, i{0};
    while(i<value){
        newFib = a+b;
        a = b;
        b = newFib;
        i++;
    }
    return a;
}

int main() {
    int nthFib = fib(9);
    cout << nthFib << endl;
}

/*
Output Questions -> Answers:
1)  10
2)  15
3)  196
*/