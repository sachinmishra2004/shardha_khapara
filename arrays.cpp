#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {99, 12, 23, 56, 67};
    int size = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << endl;
    }
    // cout << sizeof(marks); // 4byte * 5 = 20
    // cout << sizeof(marks) / sizeof(int) << endl;
}