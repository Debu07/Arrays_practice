// Given an array, cyclically rotate the array clockwise by one.

// Examples:

// Input:  arr[] = {1, 2, 3, 4, 5}
// Output: arr[] = {5, 1, 2, 3, 4}

// Following are steps.
// 1) Store last element in a variable say x.
// 2) Shift all elements one position ahead.
// 3) Replace first element of array with x.
// this can be solve by reversal algorithm also
#include <iostream>
using namespace std;

int cyclicRotate(int arr[],int n){
    int x=arr[n-1],i;
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}
int main()
{

int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);

cyclicRotate(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    
    return 0;
}
