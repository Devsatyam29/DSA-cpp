#include<iostream>
using namespace std ;
int main (){
int n;
cout <<"Enter number: ";
cin>>n;
int sum =0;
for(int i=1;i<=n;i++){
  sum+=i;
}
cout<<"sum of numbers from 0 to "<<n<< "  is " <<sum<<endl;
  return 0;
}
