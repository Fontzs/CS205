#include <iostream>
#include "matrix.hpp"
using namespace std;

int main()
{
    Matrix a(3, 4, 0.5f);
    Matrix b(3, 4, 3.0f);
    Matrix c = a + b;
    cout << "Matrix c:" << endl;
    c.show();
    cout << endl;
    Matrix d = a;
    cout << "Matrix d:" << endl;
    d.show();
    return 0;
}