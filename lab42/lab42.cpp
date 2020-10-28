
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double A;
	double B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	if (A > 0 && B > 0)
	{
		if (A != 0)
		{
			double x = B / A;
			cout << "Корень уравнения вида Ax = B: " << x << endl;
		}
		else
		{
			cout << "Нет решений. На ноль делить нельзя" << endl;
		}
	}
	else
	{
		cout << "Необходимо ввести 2 положительных числа" << endl;
	}
	return 0;
}
