#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 3; i++)
    { // outer
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}