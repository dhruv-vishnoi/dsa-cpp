#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter binary number : ";
    cin>>n;
    int i = 0;
    int answer = 0;
    while(n!=0){
        int digit = n%10;  // not bit
        if(digit){
            answer=answer+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<< answer <<endl;
}