#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;
using std::rand;
int liczba[6];
int random[6];
int i, j;

int main()
{
    srand( time( NULL ) );
    random[0] = ( rand() % 49 ) + 1;
    random[1] = ( rand() % 49 ) + 1;
    random[2] = ( rand() % 49 ) + 1;
    random[3] = ( rand() % 49 ) + 1;
    random[4] = ( rand() % 49 ) + 1;
    random[5] = ( rand() % 49 ) + 1;

    for(i=0; i<6; i++)
    {
        cin >> liczba[i];
        if(liczba[i]==random[i])
        {
            cout << "Tak" << endl;
        }
        else
        {
            cout << "Nie" << endl;
        }
    }
    system("cls");
    cout << "Twoja liczba \t \t \tWylosowane liczby" << endl;
    for(j=0; j<6; j++)
    {
        cout << liczba[j] << "\t \t \t \t" << random[j] << endl;
    }
}
