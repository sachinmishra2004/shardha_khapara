#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    for (int i = 0; i < 3; i++)
    { // outer
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        ch = ch + 1;
        cout << endl;
    }
}