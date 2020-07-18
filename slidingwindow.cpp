#include <iostream>
using namespace std;
int main()
{
    int max=-1,n;
    int arr[]={4,1,3,2,5,4,7};
    n=sizeof(arr)/sizeof(arr[0]);
    int k,sum=0;
    k=3;//window size
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    max=sum;
    for(int i=k;i<n;i++){
        sum+=arr[i]-arr[i-k];
        if(sum>max){
            max=sum;
        }
    }
    cout<<max;    
    return 0;
}
