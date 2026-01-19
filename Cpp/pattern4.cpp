// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j;
//     cin >> i >> j;

//     int rows = i;
//     int cols = j;

//     while (i >= 1)
//     {z
//         j = cols;
//         while (j >= 1)
//         {
//             cout << j;
//             j--;
//         }
//         cout << endl;
//         i--;
//     }
// }

// ----------------------------------- OR ----------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}