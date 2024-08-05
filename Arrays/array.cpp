// #include<iostream>
// using namespace std;

// int main(){
//     int array[3] = {5,7,11};
//     cout<<"Element at index 2 : "<<array[2]<<endl;
//     int array2[15] = {2,4,5};  // Rest all will become zero.

//     // Printing an array
//     int n = 15;
//     for(int i=0;i<n;i++){
//         cout<<array2[i]<<" ";
//     }
//     cout<<endl;
//     // Initialising entire array with a value excpet 0
//     int array3[100];
//     for(int i = 0;i<100;i++){
//         array3[i] = -22;
//     }
//     for(int i = 0;i<100;i++){
//         cout<<array3[i]<<" ";
//     }

//     return 0;
// }

// Array with functions

#include<iostream>
using namespace std;

void printarray(int arr[],int size){   // We Prefer to pass size in the function kyuki agar 
    for(int i = 0;i<size;i++){         // agar kisi array mai 15 elements hai aur humne 2 hi define 
        cout<<arr[i]<<" ";             // kare hai baaki sab 0 hai toh bhi 
    }                                  // size of wale method se size 15 hi aayega.
    cout<<endl<<"Printing done";
}

int main(){
    int array[15]={2,3,4,5,3,24,43,543,2,212,2};
    printarray(array,15);
    cout << endl;
    // Finding size of an array
    // Size of operator 

    int sizearray = sizeof(array)/sizeof(int);
    cout<<sizearray<<endl;
}
