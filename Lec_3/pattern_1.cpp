#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=n;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }

/* M-2
    while(i<n){
        int j=1;
        while(j<n){
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
*/
}