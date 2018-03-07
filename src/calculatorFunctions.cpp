/*
Autor : Michal Kurzynka, 271194
Prowadzacy: Wiktor Kusmirek
Numer zadania 0
*/
#include <iostream>
#include "calculatorFunctions.hpp"
using namespace std;

void getInput(double* a, double* b)
{
    int error;
    do
    {
        error = 0;
        cout << "Podaj pierwsza liczbe " << endl;
        cin >> *a;
        if (cin.fail())
        {
            cout << "Podana wartosc nie jest liczba zmiennoprzecinkowa" << endl;
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }while(error == 1);
     do
    {
        error = 0;
        cout << "Podaj druga liczbe " << endl;
        cin >> *b;
        if (cin.fail())
        {
            cout << "Podana wartosc nie jest liczba zmiennoprzecinkowa" << endl;
            error = 1;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }while(error == 1);

}
