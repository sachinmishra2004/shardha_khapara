#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size / 2; i++)
    {
        swap(vec[i], vec[size - i - 1]);
    }
}
int main()
{
    vector<int> numbers = {1, 2, 3, 4};
    cout << "Original vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    reverseVector(numbers);
    cout << "\nReversed vector: ";
    for (int num : numbers)
    {
        cout << num << " ";
    }
    return 0;
}