#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n; //check the value 2 to root(n)
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime";
            return 0;
        }
    }
    cout << " prime " << endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "not prime";
//             return 0;
//         }
//     }
//     cout << " prime " << endl;
//     return 0;
// }
