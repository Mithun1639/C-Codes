//  Move all negative numbers to beginning and 
// positive to end with constant extra space.
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,-2,-1,5,-5,2,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]<=0) i++;
        if(arr[j]>0) j--;
        if(arr[i]>0 && arr[j]<0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}