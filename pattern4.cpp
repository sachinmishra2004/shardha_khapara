#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 4; i++)
    { // outer
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        { // innerLoop

            cout << ch << " ";
            ch = ch + 1;
        }

        cout << endl;
    }
}