#include<iostream>
#include<climits>
using namespace std;
int main(){
    int max=INT_MIN;
    int arr[][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
}