//  Calculate the sum of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
}