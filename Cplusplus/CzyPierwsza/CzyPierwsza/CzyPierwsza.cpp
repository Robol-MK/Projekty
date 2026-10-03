#include <iostream>
using namespace std;


int main()
{
	int a;
	bool Pierwsza = true;

	cout << "Wpisz liczbe do Sprawdzenia Czy pierwsza" << endl;
	cin >>a;
	if (a <= 1)
	{
		Pierwsza = false;

	}
	else
	{
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				Pierwsza = false;
				break;
			}
			
		}
		
	}
	if (Pierwsza)
	{
		cout << a << "  Jest Liczbą pierwszą" << endl;
	}
	else
	{
		cout << a << "  NIe jest Liczbą pierwszą" << endl;
	}

}
