/*#include<iostream>
using namespace std;
int main(){
    do{
        //code
    }while(condition);
    return 0;
}*/


#include<iostream>
using namespace std;
int main(){
    int n, i=1;
    cout<<"Enter n:";
    cin>>n;

    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);

    cout<<endl;
    return 0;
}