#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "PL");
	char znak;
	int male = 0, duze = 0, cyfry = 0, inne = 0, ile;

	cout << "Ile wproawdzić znaków ?" << endl;
	cin >> ile;

	for (int i = 1; i <= ile; i++)
	{
		cout << "Wprowadź znak o numerze " << i << endl;
		cin >> znak;
		if (znak >= 'a' && znak <= 'z')
			++male;
		else if (znak >= 'A' && znak <= 'Z')
			++duze;
		else if (znak >= '0' && znak <= '9')
			++cyfry;
		else
			++inne;
	}

	cout << "Ilość dużych liter: " << duze << endl;
	cout << "Ilośc małych liter: " << male << endl;
	cout << "Ilość cyfr: " << cyfry << endl;
	cout << "Ilość pozostałych znaków: " << inne << endl;

}
