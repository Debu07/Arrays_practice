// rotating one by one 
// first element is replaced by second and last by first and so
// on  till loop ends

#include <iostream>
using namespace std;

void leftrotatebyone(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;   
    }
void leftRotate(int arr[],int d,int n){
        for(int i=0;i<d;i++){
            leftrotatebyone(arr,n);
        }
    }
void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr,2,n);
    printArray(arr,n);

    return 0;
}

