#include <iostream>
using namespace std;
// inverted tringle Pattern
// 1 1 1 1
//   2 2 2
//     3 3
//       4

int main()
{

    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // nums
        for (int j = 0; j < n - i; j++)
        {
            cout << ch;
        }
        cout << endl;
        ch = ch + 1;
    }
}