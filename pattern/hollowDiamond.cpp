#include<iostream>
using namespace std;
int main(){
    int n;
cout<<"Enter number:";
cin >>n;
   for(int i=0;i<n;i++)
{
   for(int k=0;k<n/2-i;k++)
{
    cout<<"+";
}
for(int j=1;j<=n;j++){
if(n%j==0){

    cout<<" ";
    break;
}
else{
    cout<<"*";
}
}
cout<<endl;
}

    return 0;
}