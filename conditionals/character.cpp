#include<iostream>
using namespace std ;
int main(){
char ch;
cout<<"enter your character: ";
cin>>ch;
if(ch>='a'&&ch<='z'){

    cout<<"your entered character is in uppercase"<<endl;
}

if(ch>='A'&&ch<='Z'){

    cout<<"your entered character is in lowercase"<<endl;
}

    return 0;
}