#include <iostream>
using namespace std;

int main(){

	int a, b;
	int w = 1;

	cout << "Wpisz Liczbe" << endl;
	cin >> a;

	cout << "Wpisz Liczbe do potęgi" << endl;
	cin >> b;

	for (int i = 1; i <= b; i++)
	{
		w = w * a;
		
	}

	cout << "Wynik:  " << w << endl;
}