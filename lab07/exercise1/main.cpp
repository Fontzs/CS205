#include <iostream>
using namespace std;

void displaySquare(int side = 4, char filledCharacyter = '*')
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << filledCharacyter;
        }
        cout << endl;
    }
}

int main()
{
    cout << "This is the default condition:" << endl;
    displaySquare();
    cout << "\n\nThis is the non-default condition:" << endl;
    displaySquare(5, '#');
    return 0;
}