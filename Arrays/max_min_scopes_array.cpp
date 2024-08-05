// #include<iostream>
// using namespace std;

// int getmax(int array[],int size){
//     int max = array[0];
//     for(int i = 0;i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     return max;
// }

// int getmin(int array[],int size){
//     int min = array[0];
//     for(int i = 0;i<size;i++){
//         if(array[i]<min){
//             min=array[i];
//         }
//     }
//     return min;
// }

// int main(){
//     int array[10];
//     cout<<"Enter elements in an array : ";
//     int size = sizeof(array)/sizeof(int);
//     for(int i = 0;i<size;i++){
//         cin>>array[i];
//     }
//     // int max,min = array[0];

//     // for(int i = 0;i<size;i++){
//     //     if(array[i]>max){
//     //         max=array[i];
//     //     }
//     // }

//     // for(int i = 0;i<size;i++){
//     //     if(array[i]<min){
//     //         min=array[i];
//     //     }
//     // }

//     int maxelement = getmax(array,10);
//     int minelement = getmin(array,10);

//     for(int i = 0;i<size;i++){
//         cout<<array[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Maximum element : "<<maxelement<<endl;
//     cout<<"Minimum element : "<<minelement<<endl;

//     return 0;
// }

#include<iostream>   
using namespace std;    

void update(int arr[],int size){
    arr[1]=120;
    for(int i = 0;i<size;i++){     // Scopes in array
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[3] = {2,3,4};
    update(arr,3);
    cout<<endl;
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}