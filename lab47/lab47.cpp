#include <iostream>
#include <ctime>
#include <cstdlib>
#include <clocale>
#include <algorithm>

using namespace std;


int main()
{
	setlocale(0, "");
	srand(time(0));
	int* a;
	int x;
	cout << "Введите количество символов массива: ";
	cin >> x;
	a = new int[x];
	cout << "Исходный массив: " << endl;
	for (int i = 0; i < x; i++)
	{
		a[i] = rand() % 20;
		std::cout << a[i] << " ";
	}
	sort(a, a + x);
	cout << "\nОтсортированный массив: " << endl;
	for (int i = x - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}

