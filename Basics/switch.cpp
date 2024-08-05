// #include<iostream>
// using namespace std;
// int main(){
//     char ch = 'b';
//     int num = 1;
//     switch(ch){
//         case 'a' : switch(num){
//             case 1 : cout<<"value of num is : "<<num<<endl;  // Nested Switch
//             break;
//         }
//         break;
//         case 'b' : cout << "b"<<endl;
//         break;
//         default : cout << "default case"<<endl;
//     }
// }

// Calculator using switch

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     char operation;
//     cout<<"Enter a : ";
//     cin>>a;
//     cout<<"Enter b : ";
//     cin>>b;
//     cout<<"Enter operation : ";
//     cin>>operation;
    
//     switch(operation){
//         case '+' : cout << "Answer is : "<<a+b<<endl;
//                     break;
//         case '-' : cout << "Answer is : "<<a-b<<endl;
//                     break;
//         case '*' : cout << "Answer is : "<<a*b<<endl;
//                     break;
//         case '/' : if(b==0){
//                     cout<<"Denominator cannot be zero"<<endl;
//                     break;
//                 }
//                 cout << "Answer is : "<<a/b<<endl;
//                     break;
//         case '%' : cout << "Answer is : "<<a%b<<endl;
//                     break;
//         default : cout<<"Wrong operation input"<<endl;

//     }
// }

// Rupees Question 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter amount : ";
    cin>>n;
    switch(1){
        case 1 : cout<<"No of 100 rupees notes : "<<n/100<<endl;
        n=n%100;
        case 2 : cout<<"No of 50 rupees notes : "<<n/50<<endl;
        n=n%50;
        case 3 : cout<<"No of 20 rupees notes : "<<n/20<<endl;
        n=n%20;
        case 4 : cout<<"No of 1 rupees notes : "<<n<<endl; 
    }
}