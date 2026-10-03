#include <iostream>
#include <string>
using namespace std;


void przywitajSie(string imie) {
    cout << "Czesc, " << imie << "! Milo Cie widziec." << endl;
}

int main() {
    string imieUzytkownika;

    cout << "Podaj swoje imie: ";
    cin >> imieUzytkownika;


    przywitajSie(imieUzytkownika);

    return 0;
}