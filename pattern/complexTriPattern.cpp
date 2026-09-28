#include <iostream>
using namespace std;
int main()
{
    int j,i,n;
    cout << "Enter number:";
    cin >> n;
    for (int i = 0; i <n; i++)
    { 
        for (int j = 0; j <=i; j++)
        {
            cout << (j+2)/2 << " ";
             
        } 
     }
        cout << endl;
    
    return 0;
}