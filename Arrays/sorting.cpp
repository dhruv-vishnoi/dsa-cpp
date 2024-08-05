// #include<iostream>
// using namespace std;

// void selectionsort(int arr[],int n){
//     for(int i = 0;i<n-1;i++){
//         int minindex = i;
//         for(int j = i+1;j<n;j++){
//             if(arr[j]<arr[minindex]){
//                 minindex = j;
//             }
//         }
//         swap(arr[i],arr[minindex]);
//     }
// }

// int main(){
//     int arr[5] = {6,2,8,4,10};
//     int n = 5;
//     selectionsort(arr,n);
//     cout<<"Printing sorted array"<<endl;
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// Bubble Sort
// #include<iostream>
// using namespace std;

// void bubblesort(int arr[],int n){
//     bool swapped = false;
//     for(int i = 1;i<n;i++){
//         for(int j = 0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped = true;
//             }
//         }
//          if(swapped==false){
//             break;   // Best case (already sorted array)
//          }
//     }
// }

// int main(){
//     int arr[6] = {10,1,7,6,14,9};
//     int n = 6;
//     bubblesort(arr,n);
//     cout<<"Printing sorted array"<<endl;
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// Insertion Sort

#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){  // can also use while loop for better code
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[7] = {10,1,7,4,8,2,11};
    int n = 7;
    insertionsort(arr,n);
    cout<<"Printing sorted array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}