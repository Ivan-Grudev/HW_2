#include <iostream>
#include <vector>
#include <forward_list>
#include <deque>
#include <list>
#include <chrono>
#include <algorithm>
#include <array>
#include <string>

using namespace std;

int main()
{
    const auto size = 10000U;

	vector <int> v(size);
    array<int, size> a;
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

    }

    auto now = std::chrono::system_clock::now();
	sort(v.begin(), v.end());
	auto end = std::chrono::system_clock::now();
	int elapsed_v = std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();
	int elapsed = elapsed_v;
	string elapsed_str = "Vector";

    now = std::chrono::system_clock::now();
	sort(a.begin(), a.end());
	end = std::chrono::system_clock::now();
	int elapsed_a = std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();
	if (elapsed > elapsed_a)
    {
        elapsed = elapsed_a;
        elapsed_str = "Array";
    }

    now = std::chrono::system_clock::now();
	sort(d.begin(), d.end());
	end = std::chrono::system_clock::now();
	int elapsed_d = std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();
	if (elapsed > elapsed_d)
    {
        elapsed = elapsed_d;
        elapsed_str = "Deque";
    }

    now = std::chrono::system_clock::now();
	l.sort();
	end = std::chrono::system_clock::now();
	int elapsed_l = std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();
	if (elapsed > elapsed_l)
    {
        elapsed = elapsed_l;
        elapsed_str = "List";
    }

    now = std::chrono::system_clock::now();
	fl.sort();
	end = std::chrono::system_clock::now();
	int elapsed_fl = std::chrono::duration_cast<std::chrono::microseconds>(end - now).count();
	if (elapsed > elapsed_fl)
    {
        elapsed = elapsed_fl;
        elapsed_str = "Forward_list";
    }

    cout << "Results (in microseconds):" << endl <<
    "Vector sorting time is " << elapsed_v << endl <<
    "Array sorting time is " << elapsed_a << endl <<
    "Deque sorting time is " << elapsed_d << endl <<
    "List sorting time (list::sort was used) is " << elapsed_l << endl <<
    "Forward_list sorting time (forward_list::sort was used) is " << elapsed_fl << endl;

    cout << endl << elapsed_str << " has the fastest sort";
    return 0;
}
