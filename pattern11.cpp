#include <iostream>
using namespace std;
//      1
//   1  2  1
//

int main()
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // spaces

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // nums1 : i+1;
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // nums2
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}