// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number:";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for(int k=0;k<n-i;k++){
//         cout<<" ";
//         }
//         for (int j = 0; j<=i ; j++)
//         { 
//             cout <<i+1;
//         }
//         for (int j = i; j>=1 ; j--)
//         { 
//             cout <<i+1;
//         }
//         cout << endl;
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
        for(int k=0;k<n-i-1;k++){
        cout<<"*";
        }
        for (int j = 0; j<=i ; j++)
        { 
            cout <<j+1;
        }
        for (int j = i; j>=1 ; j--)
        { 
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}