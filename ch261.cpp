#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float listenp, rabatt, skonto, bk, bp, hks, gkz, zek, bek, hk, sk, gw, nvk;
    cout << "Listeneinkaufspreis: ";
    cin >> listenp;
    cout << "Rabatt (in %): ";
    cin >> rabatt;
    rabatt = (rabatt / 100) * listenp; // nutzt man hier 100,0 geht es nicht, komisch!
    zek = listenp - rabatt;
    cout << "Skonto (in %): ";
    cin >> skonto;
    skonto = zek * (skonto / 100);
    bek = zek - skonto;
    cout << "Bezugskosten: ";
    cin >> bk;
    cout << "Handlungskostensatz (in %): ";
    cin >> hks;
    cout << "Gewinnzuschlag (in %): ";
    cin >> gkz;
    bp = bk + bek;
    hk = (hks / 100) * bp;
    sk = bp + hk;
    gw = sk * (gkz / 100);
    nvk = sk + gw;

    cout << endl;
    cout << setw(22) << left << "Listeneinkaufspreis: ";
    cout << fixed << setprecision(2) << setw(10) << right << listenp << " EUR" << endl; //"<<fixed" vor "<<setprecision"
    cout << setw(22) << left << "Rabatt: ";
    cout << setprecision(2) << setw(10) << right << rabatt << " EUR" << endl;
    cout << setw(22) << left << "Zieleinkaufspreis: ";
    cout << setprecision(2) << setw(10) << right << zek << " EUR" << endl;
    cout << setw(22) << left << "Skonto: ";
    cout << setprecision(2) << setw(10) << right << skonto << " EUR" << endl;
    cout << setw(22) << left << "Bareinkaufspreis: ";
    cout << setprecision(2) << setw(10) << right << bek << " EUR" << endl;
    cout << setw(22) << left << "Bezugskosten: ";
    cout << setprecision(2) << setw(10) << right << bk << " EUR" << endl;
    cout << setw(22) << left << "Bezugspreis: ";
    cout << setprecision(2) << setw(10) << right << bp << " EUR" << endl;
    cout << setw(22) << left << "Handlungskosten: ";
    cout << setprecision(2) << setw(10) << right << hk << " EUR" << endl;
    cout << setw(22) << left << "Selbstkostenpreis: ";
    cout << setprecision(2) << setw(10) << right << sk << " EUR" << endl;
    cout << setw(22) << left << "Gewinn: ";
    cout << setprecision(2) << setw(10) << right << gw << " EUR" << endl;
    cout << setw(22) << left << "Barverkaufspreis: "; // Hier wurde mit den nicht-gerundeten Werten gerechnet
    cout << setprecision(2) << setw(10) << right << nvk << " EUR" << endl;

    /*Mehrwertsteuer und
     * Bruttoverkaufspreis fehlen noch
     */

    return 0;
}