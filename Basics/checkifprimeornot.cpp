// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number n : ";
//     cin>>n;
//     bool flag;
//     for(int i = 2; i<n;i++){
//         if(n%i==0){
//             flag = 0;
//             break;
//         }
//         else{
//             flag = 1;
//         }
//     }
//     if(flag==0){
//         cout<<"NOT PRIME"<<endl;
//     }
//     else{
//         cout<<"PRIME"<<endl;
//     }

//     return 0;
// }

// Using functions

#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        }
        return 1;
    }

int main(){
    int n;
    cout<<"Enter no n : ";
    cin>>n;
    if(isprime(n)){
        cout<<"Number is PRIME"<<endl;
    }
    else{
        cout<<"Number is not prime"<<endl;
    }

    return 0;

}