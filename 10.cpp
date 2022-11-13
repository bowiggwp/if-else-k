#include <iostream>

using namespace std;

int main()
{
	int n;
	int k;

	setlocale(LC_ALL, "");

	cout << "введите число: ";
	cin >> n;

	if (n < 10)
	{
		cout << "это число меньше 10" << endl;
		k = 0;
	}
	else if (n == 10)
	{

		cout << "это число равно 10" << endl;
		k = 10;
	}
	else
	{
		cout << "это число больше 10" << endl;
		k = 1;
	}
	cout << "k= " << k << endl;
	return 0;
}