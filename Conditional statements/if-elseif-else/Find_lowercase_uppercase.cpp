/*#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Lowercase character";
    }
    else{
        cout<<"Uppercase character";
    }
    return 0;
}*/

//ASCII value->   (A-Z)->(65-90), (a-z)->(97-122)
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Uppercase character";
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lowercase character";
    }
    else{
        cout<<"Not an alphabetic character";
    }
    return 0;
}