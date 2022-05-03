#include <iostream>
using namespace std;

void sieve_of_eratosthenes(int n)
{

    int primes[n] = {0};
    primes[0] = primes[1] = 0;
    for (int i = 1; i < n; i++)
    {

        primes[i] = 1;
    }

    for (int i = 2; (i * i) < n; i++)
    {

        if (primes[i])
        {
            for (int j = 2; (j * i) < n; j++)
            {
                primes[i * j] = 0;
            }
        }
    }
    for (int i = 2; i < n; i++)
    {
        if (primes[i])
            cout << i << " ";
    }
}
int main()
{

    sieve_of_eratosthenes(10);

    return 0;
}