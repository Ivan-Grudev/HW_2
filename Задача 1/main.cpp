#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10);
    cout << "vector size is " << v.size() << endl <<
    "vector capacity is " << v.capacity() << endl;

    v.resize(999999999999);
    cout << "vector capacity now is " << v.capacity() << endl;

    return 0;
}
