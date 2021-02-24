#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(3);

    v = {1,2,3};
    cout << "vector size is " << v.size() << " vector capacity is " << v.capacity() << endl;

    for (int i = 1; i < 10; i++) {
        v.push_back(9);
        cout << "i=" << i << ": vector size is " << v.size() << " vector capacity is " << v.capacity() << endl;
    }

    //�������
    v.clear();
    cout << endl << "vector size is " << v.size() << " vector capacity is " << v.capacity() << endl;
    v.shrink_to_fit();
    cout << "vector size is " << v.size() << " vector capacity is " << v.capacity() << endl;

    v.resize(5);
    cout << "vector size is " << v.size() << " vector capacity is " << v.capacity() << endl << endl;

    v = {4,5,6};
    cout << "vector size is " << v.size() << " vector capacity is " << v.capacity() << endl;

    for (int i = 1; i < 10; i++) {
        v.push_back(9);
        cout << "i=" << i << ": vector size is " << v.size() << " vector capacity is " << v.capacity() << endl;
    }

    vector<int> vec(200);
    vec.resize(100000000);
    print_size_and_capacity(vec); //��� �������� ������ ��� ���������� ����� ��������� �������� capacity ������������� �� ��������, ������ �������� �������������� �������.
    //���� � ����� ���������� ������� �� �������, �� ��� ������������� �� ������� �������

    vector<int> vect;
    vect.reserve(150);
    vect.resize(227);
    print_size_and_capacity(vect); // ���������� ���������� ��������, �������� ������� ������������� �� ��������, ������ �������� ����������������� �������.
    //���� ����� ���������� ������� �� ��� �� �������, �� ��� ������������� �� ������� �������


    return 0;
}
