
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double a;
    double u;
    cout << "Введите число =";
    cin >> a;
    if (a > 0)
    {
        for (int i = 0; i <= 10; i++)
        {
            u = a * i;
            cout << a << "*" << i << "=" << u << "\n";
        }
    }
    else if (a == 0)
    {
        cout << "Умножение всех чисел равно 0" << "\n";
    }
    else if (a < 0)
    {
        for (int i = 0; i <= 10; i++)
        {
            u = a * i;
            cout << a << "*" << i << "=" << u << "\n";
        }
    }
    return 0;
}
