

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int a;
    cout << "Введите число: ";
    cin >> a;
    for (int i = 1; i <= 100; i++)
    {
        if (a % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}

