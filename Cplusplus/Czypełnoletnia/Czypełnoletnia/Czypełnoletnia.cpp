#include <iostream>
using namespace std;

bool Czypełnoletnia(int a) {
	if (a >= 18)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main() {
	int a;
	

	cout << "Wpisz wiek" << endl;
	cin >> a;



	if (Czypełnoletnia(a))
	{
		cout << "Osoba Pełnoletnia" << endl;

	}
	else
	{
		cout << "Osoba Niepełnoletnia" << endl;
	}


	
}