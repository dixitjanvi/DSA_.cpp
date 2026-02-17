//Or->||,  AND->&&,  NOT->!
#include<iostream>
using namespace std;
int main(){
    cout<< !(3<5) <<endl;   //NOT
    cout<<((3<1) || (3<5))<<endl;      //Or
    cout<<((3<1) || (3<1))<<endl;      //Or
    cout<<((3<1) || (3<5))<<endl;      //AND
    return 0;
}