#include <iostream>
#include <vector>
#include <tuple>
#include <deque>
#include <list>
#include <chrono>

using namespace std;

int main()
{
    int a[6] = {3, 8, 1, 6, 100, 0};
    list <int> l = {3, 8, 1, 6, 100, 0};
    vector <int> v = {3, 8, 1, 6, 100, 0};
    deque <int> d = {3, 8, 1, 6, 100, 0};
    auto t = make_tuple(3, 8, 1, 6, 100, 0);

    return 0;
}
