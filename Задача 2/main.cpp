#include <iostream>
#include <vector>
#include <forward_list>
#include <deque>
#include <list>
#include <chrono>

using namespace std;

int main()
{
    //const auto size = 10000U;
    const auto size = 3U;

	vector <int> v(size);
    int a[size];
    list <int> l(size);
    deque <int> d(size);
    forward_list <int> fl(size);

	for (size_t i = 0; i < size; ++i)
	{
	    size_t val = size - i;
		v[i] = val;
		a[i] = val;
		//l.push_front(i + 1);
		l.push_back(val);
		d[i] = val;
		fl.push_front(i + 1);

		cout << "i=" << i + 1 << " " << val << endl;
    }



    return 0;
}
