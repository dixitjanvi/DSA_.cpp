//Unary operators-> increment++, decrement--
//pre->++a,        pre->--a
//post->a++,       post->a--

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    int b=a++;
    int c=--b;
    cout<<"b ="<<b<<endl;
    cout<<"c ="<<c<<endl;
    return 0;
}