#include <iostream>
using namespace std;

//  the extern keyword extends the visibility of the C variables and C functions.
void paul(int a = 17, int b = 4)
{
    cout << a + b << endl;
}
int main()
{
    // paul();-->ausgabe 21
    // paul(20);-->ausgabe 24
    // paul(20,1);-->ausgabe 21
    paul(, 1); // fehleermeldung
    return 0;
}
