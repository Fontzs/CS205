#include <iostream>

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap3(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}