#include <iostream>
using namespace std;
// find smallest

int main()
{
    int marks[5] = {99, 23, 10, 56, 67};
    int n = 5;
    int smallest = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] > marks[smallest])
        {
            smallest = i;
        }
    }

    cout << smallest << endl;
}