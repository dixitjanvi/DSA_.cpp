#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=1; i<=n; i+=2){
        sum += i;
    }
    cout<<"Odd sum is:"<<sum;
    return 0;
}