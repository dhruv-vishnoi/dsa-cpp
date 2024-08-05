// #include<iostream>
// using namespace std;

// int binarysearch(int arr[],int n,int key){
//     int s = 0; //start
//     int e = n-1;  //end
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(arr[mid]<key){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid = s + (e-s)/2;  // Optimization : instead of using (s+e)/2
//     }
//     return -1;
// }

// int main(){
//     int even[6]={1,2,3,4,5,6};
//     int odd[5]={1,2,3,4,5};
//     int evenindex = binarysearch(even,6,90);
//     cout<<"Index of element in even array : "<<evenindex<<endl;
//     int oddindex = binarysearch(odd,5,5);
//     cout<<"Index of element in odd array : "<<oddindex<<endl;

//     return 0;
// }

// First and Last occurence of an element in a sorted array 
// #include<iostream>
// using namespace std;

// int leftocc(int arr[],int n,int k){
//     int s = 0;
//     int e = n-1;
//     int ans=-1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(arr[mid]==k){
//             ans = mid;
//             e=mid-1;
//         }
//         else if(arr[mid]>k){
//             e=mid-1;
//         }
//         else if(arr[mid]<k){
//             s=mid+1;
//         }
//         mid = s+(e-s)/2;
        
//     }
//     return ans;
// }

// int rightocc(int arr[],int n,int k){
//     int s = 0;
//     int e = n-1;
//     int ans=-1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(arr[mid]==k){
//             ans = mid;
//             s=mid+1;
//         }
//         else if(arr[mid]>k){
//             e=mid-1;
//         }
//         else if(arr[mid]<k){
//             s=mid+1;
//         }
//         mid = s+(e-s)/2;
        
//     }
//     return ans;
// }

// int main(){
//     int arr[7]={1,2,3,3,3,3,5};
//     int firstocc = leftocc(arr,7,3);
//     int lastocc = rightocc(arr,7,3);
//     cout<<"First occurence : "<<firstocc<<endl;
//     cout<<"Last occurence : "<<lastocc<<endl;
//     cout<<"Total occurence : "<<lastocc-firstocc + 1<<endl;
    
//     return 0;
// }

// Peak in a mountain array
// #include<iostream>
// using namespace std;
// int peak(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[4]={3,4,5,1};
//     int peakelement = peak(arr,4);
//     cout<<"Peak element : "<<peakelement<<endl;
// }

// Pivot index in an array
// #include<iostream>
// using namespace std;

// int pivotindex(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]>=0){
//             s=s+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[5]={3,8,10,17,1};
//     int pivot = pivotindex(arr,5);
//     cout<<"Pivot element : "<<pivot<<endl;
// }

// Binary Search in sorted rotated array

// #include<iostream>
// using namespace std;

// int binarysearch(int arr[], int s, int e ,int target){
//     int start = s;
//     int end = e;
//     int mid = start + (end-start)/2;
//     while(start<=end){
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(arr[mid]<target){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }

// int pivotindex(int arr[],int n){
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[0]>=arr[mid]){
//             s=mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int bsinpivotrotated(int arr[],int n,int target){
//     int pivot = pivotindex(arr,5);
//     if(target>=arr[pivot] && target<=arr[n-1]){
//         return binarysearch(arr,pivot,n-1,target);
//     }
//     else{
//         return binarysearch(arr,0,pivot - 1,target);
//     }
// }
// int main(){
//     int arr[5]={7,9,1,2,3};
//     int target = 2;
//     int ans = bsinpivotrotated(arr,5,target);
//     cout<<"ans is : "<<ans<<endl;

//     return 0;
// }

// Square root using binary search

#include<iostream>
using namespace std;

    