#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=5 ; i++){
        cout<<"Hi"<<endl;
        continue;
        cout<<"Hey"<<endl; // Unreachable
    }
}