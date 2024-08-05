// C++ (DSA)

// #include<iostream>
// using namespace std;

// int main() {

// cout << "Hello World" << endl; 
// cout << "Hello World\n";
// cout << "Hello World" << '\n';

// float f = 3.14;
// int size = sizeof(f);  
// cout << "The size of float is : " << size << endl; 

//Type Casting 

// int a = 'a';
// cout << a << endl;
// char ch = 98;
// cout << ch << endl;
// char b = 123456;
// cout << b << endl;   

// unsigned int c = 112;
// cout << c << endl;
// unsigned int d = -112;
// cout << d << endl;  // huge number as output

// int a = 3;
// int b = 3;
// bool equalornot = a==b;
// cout << equalornot << endl;

// int n;
// cin>>n;
// if(n>0) {
//     cout << "Number is positive" << endl;
// }
// else {
//     cout << "Number is negative" << endl;
// }

// int a,b;
// cout << "Enter number a and b : ";
// cin>>a>>b;
// //a=cin.get(); // To take space , enter and tab as input
// if(a>b){
//     cout << "a is greater than b"<< endl;
// }
// else{
//     cout << "b is greater than a"<< endl;
// }

// char n;
// cout<<"Enter a character : ";
// cin>>n;
// if(n>='a' && n<='z'){   //ASCII values are used.
//     cout<< "This is lowercase" << endl;
// }
// else if(n>='A' && n<='Z'){
//     cout<< "This is uppercase" << endl;
// }
// else if(n>='0' && n<='9'){
//     cout<< "This is numeric" << endl;
// }

// Print numbers from 1 to n 

// int n;
// cout<<"Enter a number : ";
// cin>>n;

// int i = 1;
// while(i<=n){
//     cout<<i<<" ";
//     i++;
// }
// }

// Sum of nos from 1 to n

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int i=0;;
//     int sum=0;
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     cout<<"sum of nos from 1 to n is "<<sum<<endl;
// }

// Sum of even nos from 1 to n.

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int i=2;
//     int sum=0;
//     while(i<=n){
//         sum=sum+i;
//         i=i+2;
//     }
//     cout<<"The sum of even nos from 1 to n is "<<sum<<endl;

// }

// F to C conversion.
// #include<iostream>
// using namespace std;

// int main() {
//     float temp;
//     cout<<"Enter temperature in F : ";
//     cin>>temp;
//     float tempc = (temp-32)*(5.0/9);
//     cout<<"Temp in degree C is : "<<tempc<<endl;
// }

// Check if a number is prime or not.

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number to check : ";
//     cin>>n;
//     int i=2;
//     bool Isprime=true;
//     while(i<n){
//         if(n%i!=0){
//             bool Isprime = true;
//             i++;
//         }
//         else{
//             Isprime = false;
//             break;
//         }
//     }
//     if(Isprime==true){
//         cout<<n<<" Is Prime"<<endl;
//     }
//     else{
//         cout<<n<<" is Not Prime"<<endl;
//     }

// }

//  Pattern Printing

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n) {
//         int j = 1; //Imp step.
//         while(j<=n){
//             cout<<" * ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<i<<" " ;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<n-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     int count = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<" * ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     int count = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         int count = i;
//         while(j<=i){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>   //Alternate method of above question
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i+j-1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         int value = i;
//         while(j<=i){
//             cout<<value<<" ";
//             value--;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A'+i-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     char ch = 'A';
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A'+i+j-2;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){   //Alternate method
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char value = 'A' + i - 1;
//         while(j<=n){
//             cout<<value<<" ";
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             char ch = 'A'+i-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     char ch = 'A';
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         char ch  = 'A'+i-1;
//         int j = 1;
//         while(j<=i){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n): ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A' + n - i;
//         while(j<=i){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A'+i-1;
//         while(j<=n){
//             cout<<ch<<" ";
//             ch++;
//             j++;
//          }
//          cout<<endl;
//          i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows and columns(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = i - 1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=n-i+1){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     while(i<=n){
//         int space = i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         int x = i;
//         while(j<=n-i+1){
//             cout<<x;
//             x++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no of rows(n) : ";
//     cin>>n;
//     int i = 1;
//     int count = 1;
//     while(i<=n){
//         int space = n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<count;
//             count++;
//             j++;
//         } 
//         cout<<endl;
//         i++;
//     }
// }

// Till Patterns













   


