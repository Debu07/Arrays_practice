#include <iostream>
using namespace std;

int gcd(int n, int d){
    if(d==0){
        return n;
    }
    else{
        return(d,n%d);
    }
}

int jugglingRotate(int arr[],int n,int d){
    int num=-1,i,temp,j;
    for(i=0;i<gcd(n,d);i++){
        num=i;
        temp=arr[i];
        while(1){
            num=(j+d)%n;

            if(num==i) break;

            arr[j]=arr[num];
            j=num;
        }
        arr[j]=temp;
    }
}

int main()
{

int arr[]={1,2,3,4,5,6,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
jugglingRotate(arr,n,3);    
    return 0;
}
