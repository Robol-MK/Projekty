#include <iostream>

using namespace std;
int main()
{
    int ile, sum, max, min, x;

    cout << "Ile liczb wprowadzić ?" << endl;
    cin >> ile;

    cout << "Wprowadź liczbę 1:" << endl;
    cin >> sum;
    min = sum;
    max = sum;

    for (int i = 2; i <= ile; i++)
    {
        cout << "Wprowadź liczbę " << i << " :" << endl;
        cin >> x;
        sum += x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    cout << "sum: " << sum << endl;
    double avg = (double)sum / (double)ile;
    cout << "średnia: " << avg << endl;
}