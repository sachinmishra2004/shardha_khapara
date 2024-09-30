#include <iostream>
#include <vector>
using namespace std;
// static memory create in the stack or dynamic memory allocation in create heap;
// static memory create in complie time or dynamic memory allocation in run time
int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(8);

    // cout << vec.front() << endl;
    // cout << vec.back() << endl;
    // cout << vec.at(0) << endl;

    cout << vec.size() << endl;     // 5
    cout << vec.capacity() << endl; // 8

    return 0;
}