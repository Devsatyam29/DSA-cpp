#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    // char ch;
    // cout<<"enter start alphabet:";
    // cin>>ch;
    char ch = 'A'; // if you want to get ascii value type cast char to int.//cout<<(int)ch;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}