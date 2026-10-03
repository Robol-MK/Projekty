#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;

    cout << "Podaj liczbe dni pomiarowych: ";
    cin >> N;

    while (N <= 0)
    {
        cout << "Blad! Liczba dni musi byc wieksza od 0." << endl;
        cout << "Podaj liczbe dni pomiarowych: ";
        cin >> N;
    }

    double temperatura;
    double suma = 0;
    double minTemp = 0;
    double maxTemp = 0;

    int mrozne = 0;
    int dodatnie = 0;
    int zerowe = 0;
    bool upal = false;

    for (int i = 1; i <= N; i++)
    {
        cout << "Dzien " << i << ": ";
        cin >> temperatura;

        while (temperatura < -50 || temperatura > 60)
        {
            cout << "Blad pomiaru! Wprowadz temperature z zakresu od -50 do 60 C." << endl;
            cout << "Dzien " << i << ": ";
            cin >> temperatura;
        }

        suma = suma + temperatura;

        if (i == 1)
        {
            minTemp = temperatura;
            maxTemp = temperatura;
        }
        else
        {
            if (temperatura < minTemp)
            {
                minTemp = temperatura;
            }

            if (temperatura > maxTemp)
            {
                maxTemp = temperatura;
            }
        }

        if (temperatura < 0)
        {
            mrozne++;
        }
        else if (temperatura > 0)
        {
            dodatnie++;
        }
        else
        {
            zerowe++;
        }

        if (temperatura >= 30)
        {
            upal = true;
        }
    }

    double srednia = suma / N;

    cout << endl;
    cout << "RAPORT POGODOWY" << endl;
    cout << fixed << setprecision(2);

    cout << "Srednia temperatura: " << srednia << " C" << endl;
    cout << "Najnizsza temperatura: " << minTemp << " C" << endl;
    cout << "Najwyzsza temperatura: " << maxTemp << " C" << endl;
    cout << "Liczba dni mroznych (< 0 C): " << mrozne << endl;
    cout << "Liczba dni dodatnich (> 0 C): " << dodatnie << endl;
    cout << "Liczba dni z temp. zerowa: " << zerowe << endl;

    if (upal)
    {
        cout << "Uwaga: Odnotowano upal!" << endl;
    }

    return 0;
}