#include <iostream>
using namespace std;
#include <iomanip>

float Zins(int k, float zinssatz)
{

    return (k * (zinssatz / 100));
}
int main()
{

    float kapital, jahr;
    float zinssatz;
    cout << "Kapital eingeben : ";
    cin >> kapital;
    cout << "Jahr eingeben : ";
    cin >> jahr;
    cout << "Zinssatz(int %) eingeben : ";
    cin >> zinssatz;
    cout << "Jahr\tKapital\n";
    int i = 1;
    while (jahr--)
    {
        float profit = Zins(kapital, zinssatz);
        kapital = (kapital + profit);
        cout << i++ << "\t" << fixed << setprecision(2) << kapital << endl;
    }

    return 0;
}