#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cin>>n;
    while(i<=(n-1)){
        if(n%i==0){
            cout<<"Not prime";
            break;
        }
        else{
            cout<<"Prime";
            break;
        }
        cout<<endl;
    }
    return 0;
}