#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int lastdigit=0;
    int reverse=0;
    while(n>0){
        lastdigit=n%10;
        reverse*=10;
        reverse+=lastdigit;
        n=n/10;
    }
    cout<<reverse;
}