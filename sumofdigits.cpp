#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0,rem;
    while(n!=0){
      rem=n%10;
      sum+=rem;
      n=n/10;
    }
    cout<<sum<<endl;
    
    return 0;
}
