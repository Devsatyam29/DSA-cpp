#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int oddsum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            oddsum += i;
        }
    }
    cout << "sum of odd numbers from 0 to " << n << "  is " << oddsum << endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     int oddsum = 0;
//     for (int i = 1; i <= n; i+=2)
//     {
        
//             oddsum += i;
    
//     }
//     cout << "sum of odd numbers from 0 to " << n << "  is " << oddsum << endl;
//     return 0;
// }