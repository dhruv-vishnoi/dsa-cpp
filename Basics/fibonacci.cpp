#include<iostream>
using namespace std;
int main(){
    int n;    // 0 1 1 2 3 5 8 13.....Fibonacci series
    cout<<"Enter n term till which series has to be printed : ";
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1; i<n;i++){
        int nextnumber_sum = a+b;
        cout<<nextnumber_sum<<" ";
        a=b;
        b=nextnumber_sum;
    }
}