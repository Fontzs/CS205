#include <iostream>
using namespace std;
template <typename T>
T minimum(T a, T b)
{
    return a < b ? a : b;
}

int main()
{
    cout << minimum<int>(1, 2) << endl;
    cout << minimum<char>('#', '%') << endl;
    cout << minimum<float>(3651.5, 115.1) << endl;
    return 0;
}