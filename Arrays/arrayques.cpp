// #include<iostream>
// using namespace std;
// // Find sum of elements of an array
// int sum(int arr[],int size){
//     int sum = 0;
//     for(int i = 0;i<size;i++){
//         sum = sum + arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[5];
//     cout<<"Enter elements : ";
//     for(int i = 0;i<5;i++){
//         cin>>arr[i];
//     }
//     int sumarray = sum(arr,5);
//     cout<<"The sum of elements is : "<<sumarray<<endl;

//     return 0;
// }

// Linear Search in an array

// #include<iostream>
// using namespace std;
// bool search(int arr[],int size,int key){
//     for(int i = 0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[5] = {2,4,5,6,3};
//     int key;
//     cout<<"Enter element to search for in an array : ";
//     cin>>key;

//     int found = search(arr,5,key);

//     if(found){
//         cout<<"Element "<<key<<" is present"<<endl;
//     }
//     else{
//         cout<<"Element "<<key<<" is not present"<<endl;
//     }

//     return 0;
// }

// Reverse an array

// #include<iostream>
// using namespace std;

// void reverse(int arr[],int brr[],int size){
//     for(int i = 0;i<size;i++){
//         brr[i]=arr[size-i-1];
//     }
//     cout<<"Printing reversed array"<<endl;
//     for(int i = 0;i<size;i++){
//         cout<<brr[i]<<" ";
//     }
// }

// int main(){
//     int arr[5] = {23,34,54,67,76};
//     int brr[5];
//     reverse(arr,brr,5);

//     return 0;
// }

// Swap alternate terms

// #include<iostream>
// using namespace std;
// void printarray(int arr[],int size){
//     for(int i = 0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

// }

// void swapalternate(int arr[],int size){
//     for(int i = 0;i<size;i=i+2){
//         if(i+1<size){   // IMP
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     swapalternate(arr,5);
//     cout<<"New array : ";
//     printarray(arr,5);

//     return 0;
// }

// Find unique element function

// int unique(int arr[],size){
//     int ans = 0;
//     for(int i = 0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// Find duplicate element
// int findDuplicate(vector<int> &arr) 
// {
//     // Write your code here
// 	int ans = 0;

//     for(int i = 0;i<arr.size();i++){
//         ans = ans^arr[i];
//     }

//     for(int i = 0;i<arr.size();i++){
//         ans = ans^i;
//     }
//     return ans;
// }


 // Triplets with given sum
//  #include<iostream>
//  using namespace std;

//  void sum(int arr[],int n,int sum){
//     sort(arr,arr+n);

//     for(int i = 0;i<n;i++){
//         if(i>0 && arr[i]==arr[i-1]){    // Remove duplicates
//             continue;
//         }
//       for(int j = i+1;j<n;j++){
//         if(j>i+1 && arr[j]==arr[j-1]){
//             continue;
//         }
// 		  for(int k = j+1;k<n;k++){
//             if(k>j+1 && arr[k]==arr[k-1]){
//             continue;
//         }
// 			if(arr[i]+arr[j]+arr[k]==sum){
//             cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
// 		  }
//          }
//       }
//    }
// }

// int main(){
//     int arr[5] = {10,5,5,5,2};
//     int n = 5;
//     int k=12;
//     sum(arr,5,12);
// }

// Sort 0 1
// Using 2 pointer approach

// #include<iostream>
// #include<algorithm> // For swap
// using namespace std;

// void print(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void sort(int arr[],int n){
//     int i = 0;
//     int j = n-1;
//     while(i<j){
//         if(arr[i]==0){
//             i++;
//         }
//         if(arr[j]==1){
//             j--;
//         }
//         if(arr[i]==1 && arr[j]==0){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }
// int main(){
//     int arr[6]={0,1,1,0,0,1};
//     sort(arr,6);
//     print(arr,6);

//     return 0;
// }

// Sort 0 1 2
