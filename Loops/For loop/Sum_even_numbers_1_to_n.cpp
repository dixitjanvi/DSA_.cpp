#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0; i<=n; i+=2){
        sum += i;
    }
    cout<<"Even sum is:"<<sum;
    return 0;
}