#include<iostream>
using namespace std ;
int main(){
int marks;
cout<<"Enter your marks: ";
cin>>marks;
if (marks>=90){
cout<<"your grade is E "<<endl;
}

if (marks>=80 && marks<90){
cout<<"your grade is A \n";
}
if (marks>=70 && marks<80){
cout<<"your grade is B "<<endl;
}
if (marks>=60 && marks<70){
cout<<"your grade is C "<<endl;
}
if (marks>=50 && marks<60){
cout<<"your grade is D "<<endl;
}

if (marks<50){
cout<<"your grade is F \n";
}




return 0;
}