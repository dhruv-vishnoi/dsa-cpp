// #include<iostream>
// using namespace std;
// int main(){
//     // pow(a,b)
//     int a;
//     int b;
//     int answer = 1;
//     cin>>a;
//     cin>>b;
//     for(int i = 1;i<=b;i++){
//         answer = answer * a;
//     }
//     cout<<answer<<endl;
// }

// Power function

#include<iostream>
using namespace std;

int power(/*int a , int b */){
    int a,b;
    cin>>a>>b;
    int answer = 1;
    for(int i = 1;i<=b;i++){
    answer = answer * a;
}
return answer;

}

int main(){
    // int a,b;
    // cout<<"Enter a : ";
    // cin>>a;
    // cout<<"Enter b : ";
    // cin>>b;
    int ans = power();
    cout << "Answer is : " << ans << endl;
    ans = power();
    cout << "Answer is : " << ans << endl;
    
    ans = power();
    cout << "Answer is : " << ans << endl;
}