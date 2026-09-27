#include <iostream>
using namespace std;
int main()
{
    bool isprime = true;
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            // non prime
            break;
        }
    }
    if (isprime = false)
    {
        cout << "not prime" << endl;
    }
    else
    {
        cout << "prime " << endl;
    }
    return 0;
}
