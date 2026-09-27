// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n; j>i ; j--)
//         { 
//             cout <<i+1;
            
//         }
//         cout << endl;
//         for(int k=0;k<=i;k++){
//         cout<<" ";
//         }
    
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for(int k=0;k<=i;k++){
        cout<<" ";
        }
        for (int j = 0; j<n-i ; j++)
        { 
            cout <<i+1;
            
        }
        cout << endl;
    }
    return 0;
}