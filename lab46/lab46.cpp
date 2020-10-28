
#include <iostream>
using namespace std;

int main()
{
    int x;
    do
    {
        setlocale(0, "");
        double a;
        double f = 1;
        cout << "Введите число=";
        cin >> a;
        for (a; a > 0; a--)
        {
            f *= a;
        }
        cout << "Факториал равен=" << f << endl;
        cout << "Продолжить? Введите числа: 0 - нет, 1 - да" << endl;
        cin >> x;

    } while (x != 0);
    return 0;
}

