#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    for (int i = 0; i < 3; i++)
    { // outer
        for (int j = 0; j < 3; j++)
        {
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
}