#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int realPart;
    int imaginaryPart;

public:
    Complex(int r = 0, int i = 0)
    {
        setrealPart(r);
        setimaginaryPart(i);
    }

    void setrealPart(int r)
    {
        this->realPart = r;
    }
    void setimaginaryPart(int i)
    {
        this->imaginaryPart = i;
    }

    int getrealPart()
    {
        return realPart;
    }
    int getimaginaryPart()
    {
        return imaginaryPart;
    }

    void add(Complex x)
    {
        int i = x.getimaginaryPart();
        int r = x.getrealPart();
        setrealPart(this->realPart + r);
        setimaginaryPart(this->imaginaryPart + i);
    }

    void subtract(Complex x)
    {
        int i = x.getimaginaryPart();
        int r = x.getrealPart();
        setrealPart(this->realPart - r);
        setimaginaryPart(this->imaginaryPart - i);
    }

    void display()
    {
        cout << getrealPart();
        if (getimaginaryPart() > 0)
        {
            cout << "+" << getimaginaryPart() << "i" << endl;
        }
        else
        {
            cout << getimaginaryPart() << "i" << endl;
        }
    }
};
