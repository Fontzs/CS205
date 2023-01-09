#include <iostream>
using namespace std;
int main()
{
    char *arr = new char[]{65, 66, 67, 68, 69};
    cout << arr << endl;
    arr[6] = 76;
    cout << arr[6] << endl;
    return 0;
}