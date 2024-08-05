// Even Odd

// #include<iostream>
// using namespace std;

// bool evenodd(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     bool even = evenodd(n);
//     if(even==true){
//         cout<<"Number is even"<<endl;
//     }
//     else{
//         cout<<"Number is odd"<<endl;
//     }
//     return 0;
// }

// ncr program

// #include<iostream>
// using namespace std;

// int fact(int n){
//     int fact = 1;
//     for(int i = 1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int ncr(int n , int r){
//     int num = (fact(n);
//     int den = fact(r)*fact(n-r);
//     return num/den;
// }

// int main(){
//     int n,r;
//     cout<<"Enter n and r : ";
//     cin>>n>>r;
//     int ans = ncr(n,r);
//     cout<<ans<<endl;

//     return 0;
// }

// Counting Program
// #include<iostream>
// using namespace std;

// // Function signature
// void counting(int num){

//     // Function body
//     // cout << n << endl; // Error
//     for(int i = 1 ; i<=num ; i++){
//         cout<<i<<" ";
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     // Function call
//     counting(n);

//     return 0;
// }

// HW ques
// Q1

// #include<iostream>
// using namespace std;

// int apseries(int n){
//     int nthterm = 3 * n + 7;
//     return nthterm;
// }

// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int ans = apseries(n);
//     cout<<"The "<< n << "th term of AP is : "<< ans << endl;
//     return 0;
// }

// Q2
// #include<iostream>
// using namespace std;

// int setbits(int a , int b){
//     int count = 0;
//     while(a!=0){
//         int bit = a&1;
//         if(bit==1){
//             count++;
//         }
//         a=a>>1;
//     }
//     while(b!=0){
//         int bit = b&1;
//         if(bit==1){
//             count++;
//         }
//         b=b>>1;
//     }
//     return count;
// }

// int main(){
//     int a,b;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     int totalsetbits = setbits(a,b);
//     cout<<"The total no of set bits are : "<<totalsetbits<<endl;

//     return 0;
// }

// Q3

#include<iostream>
using namespace std;

int fibonacci(int n){
    int sum = 0;
    int a = 0;
    int b = 1;
    for(int i = 1 ; i<n ; i++){
        sum = a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter nth term of fibonacci series : ";
    cin>>n;
    int nterm = fibonacci(n);
    cout<<"The "<<n<<"th term of fib series is : "<<nterm<<endl;

    return 0;
}
