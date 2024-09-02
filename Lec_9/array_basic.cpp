//initialising and prnting an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    //taking inputs in array
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    //printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}