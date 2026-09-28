// #include <iostream>
// using namespace std;
// int main()
// {
//     int star;
//     cout << "Enter number of star:";
//     cin >> star;
//     // for (int i = 1; i <= star; i++)
//     // {
//     //     cout<<"****** "<<endl;
//     // }
//     for (int i = 1; i <= star; i++)
//     {
//         cout<<"*"<<endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int star, moon;
    cout << "Enter number of star & moon:";
    cin >> star >> moon;
    for (int i = 1; i <= star; i++)
    {
        for (int j = 1; j <= moon; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
