#include <iostream>
using namespace std;

void reverseArray(int arr[], int n, int d){

    while(n<d){
        int temp=arr[n];
        arr[n]=arr[d];
        arr[d]=temp;
        n++;
        d--;
    }
}
void rotateArray(int arr[], int n, int d){
    if(d==0) return;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    rotateArray(arr,n,2);   
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
