#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>0){
        cout<<"It's a positive number.";
    }
    else if(n<0){
        cout<<"It's a negative number.";
    }
    else{
        cout<<"It's a zero.";
    }
    return 0;
}