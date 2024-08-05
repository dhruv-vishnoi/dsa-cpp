#include<iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter value of n : ";
    // cin >> n;
    // cout << "Printing nos from 1 to n" << endl;
    // // for(int i = 1;i<=n;i++){
    // //     cout<<i<<" ";
    // // }
    // int i = 1;
    // for( ; ; ){
    //     if(i<=n){
    //         cout<<i<<" ";
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // for(int a = 0,b = 1,c = 2 ; a>=0 && b>=1 && c>=2 ; a--,b--,c-- ){
    //     cout << a << " "<< b <<" "<< c;
    // }

    // Sum of nos from 1 to n
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int sum = 0;
    for(int i = 1; i<=n;i++){
        sum = sum + i;
    }
    cout<<"Sum of nos from 1 to n is : "<<sum<<endl;
    
    return 0;

}