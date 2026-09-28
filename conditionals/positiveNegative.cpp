#include<iostream>
using namespace std ;
int main(){
int n;
cout<<"Enter n: ";
cin>>n;
if (n>0){
    cout<<n<<" is a positive no"<<endl;
}
else if(n==0){
    cout<<"Niether negative nor positive "<<endl;
}
else {
    cout<<n<<" is a negative no"<<endl;
}
    return 0;
}