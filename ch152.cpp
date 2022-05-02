#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
void print_menu(char (*ptr)[10])
{

    for (int i = 0; i < 12; i++)
    {
        cout << i + 1 << "\t:" << ptr[i] << endl;
    }
}
void print_kalender(int n, int *monate_unterschiede, char (*ptr)[10], int *monate_ende)
{
    cout << "\t\t\t**" << ptr[n - 1] << " 2022**\n\tMo\tDi\tMi\tDo\tFr\tSa\tSo\n";
    int count = 0, j = 1;
    for (int i = 0; i < (monate_ende[n - 1] + monate_unterschiede[n - 1]); i++)
    {

        if (count == 7)
        {
            cout << "\n";
            count = 0;
        }
        if (count == 0)
        {
            cout << "\t";
        }
        if (i < monate_unterschiede[n - 1])
        {
            cout << "\t";
            count++;
        }
        else
        {
            cout << j++ << "\t";
            count++;
        }
    }
}
int main()
{
    char monats[][10] = {"Januar", "Februar", "Maerz", "April", "Mai", "Juni", "Juli", "August", "September", "Oktober", "November", "Dezember"};
    int monate_unterschiede[12] = {5, 2, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3};
    int monate_ende[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << "\t**Kalender von Jahr 2022**\nWaehlen Sie einen Monat aus:" << endl;
    print_menu(monats);
    int n;
    cin >> n;
    system("CLS");
    print_kalender(n, monate_unterschiede, monats, monate_ende);
    return 0;
}