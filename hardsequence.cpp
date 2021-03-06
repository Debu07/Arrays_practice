// Chef decided to write an infinite sequence. Initially, he wrote 0

// , and then he started repeating the following process:

//     Look at the last element written so far (the l

// -th element if the sequence has length l so far); let's denote it by
//  x
// .
// If x
// does not occur anywhere earlier in the sequence, the next element in
//  the sequence is 0
// .
// Otherwise, look at the previous occurrence of x
// in the sequence, i.e. the k-th element, where k<l, this element is 
// equal to x and all elements between the k+1-th and l−1-th are different 
// from x. The next element is l−k, i.e. the distance between the last two 
// occurrences of x

//     .

// The resulting sequence is (0,0,1,0,2,0,2,2,1,…)
// : the second element is 0 since 0 occurs only once in the sequence 
// (0), the third element is 1 since the distance between the two 
// occurrences of 0 in the sequence (0,0) is 1, the fourth element is 0 
// since 1 occurs only once in the sequence (0,0,1)

// , and so on.

// Chef has given you a task to perform. Consider the N
// -th element of the sequence (denoted by x) and the first N elements 
// of the sequence. Find the number of occurrences of x among these N
//  elements


#include <iostream>
using namespace std;

int main()
{
    int arr[129];
    int visited[256];
    arr[1]=0;
    for(int i=0;i<256;i++){
        visited[i]=0;
    }    

    for(int i=2;i<129;i++){
        if(visited[arr[i-1]]!=0){
            arr[i]=(i-1)-visited[i-1];
        }
        else{
            arr[i]=0;
        }
        visited[arr[i-1]]=i-1;
    }
    int count=0;
    for(int i=1;i<2;i++){
        if(arr[i]==arr[2]) count++;
    }
    for(int i=1;i<129;i++){
        cout<<arr[i]<<endl;
    }
    cout<<count;
    return 0;
}
