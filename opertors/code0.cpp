#include <iostream> //pre processor
using namespace std;

int main()
{
    int age = 4;
    char grade = 'A';
    float avg = 11.3465768;
     bool isSafe=true;
    double box =45.57685746;
    cout << age << " int - and its size is " << sizeof(age) << " bytes" << endl;
    cout << grade << " char - and its size is " << sizeof(grade) << " bytes" << endl;
    cout << avg << " float - and its size is " << sizeof(avg) << " bytes" << endl;
    cout<<isSafe <<" bool - and its size is "<<sizeof(isSafe)<<" bytes"<<endl;
    cout<<box << " double - and its size is "<<sizeof(box)<<" bytes"<<endl;
    return 0;
}