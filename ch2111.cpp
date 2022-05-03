#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 1000
#define MIN 100
bool isPrime(int i)
{

    for (int r = 2; r < i; r++)
    {
        if ((i % r) == 0)
        {
            return false;
        }
    }
    return true;
}
void Prim_generator(int st, int end)
{
    if (end > 1000)
        return;
    for (int i = st; i < end; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()

{
    int i = 1;
    do
    {
        if (i == 1)
        {
            Prim_generator(2, MIN);
        }
        i = i + 100;
        cout << "Bitte \'y\' eingeben,falls Sie naechste 25 Prim Zahlen sehen wollen,ansonsten \'n\' eingeben: \n";
        char n;
        cin >> n;
        if (n == 'y')
        {
            Prim_generator(i, MIN + i);
        }
        else
        {
            break;
        }

    } while (i < MAX);

    return 0;
}