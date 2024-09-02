#include<iostream>
using namespace std;
int main(){
    int num=3;
    cout<<(25 *(++num))<<endl;
    int a=1;
    int b=a++;
    int c=++a;
    cout<<b<<endl;
    cout<<c;
}