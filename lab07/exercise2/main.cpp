#include <iostream>
using namespace std;
int vabs(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}
float vabs(float *p, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}
double vabs(double *p, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    return sum;
}

int main()
{
    int a[] = {1, 2, 3};
    float b[] = {1.1f, 2.2f, 3.3f};
    double c[] = {1.133212, 2.87219, 3.168498};
    cout << vabs(a, 3) << typeid(vabs(a, 3)).name() << endl;

    cout << vabs(b, 3) << typeid(vabs(b, 3)).name() << endl;
    cout << vabs(c, 3) << typeid(vabs(c, 3)).name() << endl;

    return 0;
}