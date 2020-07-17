// problem statement is to find the majority element
// a majority element is an element which is present more than n/2
// times where n is the size of array.

// this method takes O(n) of time and O(1) space

// steps are:
// 1. find the candidate (code below)
// 2. verify the candidate (code below)


#include <iostream>
 using namespace std;

void mooresVotingAlgo(int arr[],int n){
    //find the candidate
    int majority=arr[0],count=1,i,major=0;
    for(i=1;i<n;i++){
        if(majority=arr[i]){
            count++;
        }
        else{
            count--;
            if (count==0){
                majority=arr[i];
                count=1;
            }
        }
    }
    //verify the candidate
        for(int i=0;i<n;i++){
            if(arr[i]==majority){
                major++;
            }
        }

        if(major>n/2){
                cout<<"majority element is "<<majority<<endl;
                cout<<"which is present "<<major<<" times."<<endl; 
            }
            else{
                cout<<"no majority element"<<endl;
            }

 }

int main()
{
    int arr[]={7,3,7,2,7,3,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    mooresVotingAlgo(arr,n);
    return 0;
}
