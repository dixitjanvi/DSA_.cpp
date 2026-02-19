#include<iostream>
using namespace std;
int main() {
    int n;
    long long F = 1;
    cin>>n;

    if(n<0){
        return 0; 
    }
    for(int i=1; i<=n; i++){
        F=F*i;
    }
    cout<<F;
    return 0;
}