#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "Wpisz a" << endl;
	cin >> a;

	cout << "Wpisz b" << endl;
	cin >> b;

	if (a <= 0 || b <= 0)
	{
		cout << "Liczby muszą być większe od 0" << endl;
	}
	while (a != b)
	{
		if(a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	cout << "NWD = " << a << endl;
}