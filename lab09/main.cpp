#include <iostream>
#include "complex.hpp"
using namespace std;

int main()
{
    Complex a = Complex(1, 2);
    Complex b = Complex(3, 4);

    cout << "a = ";
    a.display();
    cout << "b = ";
    b.display();

    a.add(b);
    cout << "a + b = ";
    a.display();

    cout << "a = ";
    a.display();
    cout << "b = ";
    b.display();

    b.subtract(a);
    cout << "b - a = ";
    b.display();

    return 0;
}