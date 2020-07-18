#include <iostream>
using namespace std;
    
int main()
{
    int arr[5];
    int i;
    int total=(5*(5+1))/2;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(j=0;j<5;j++){
        sum+=arr[i];
    }
    int diff=total-sum;
    cout<<diff;
    return 0;
}
