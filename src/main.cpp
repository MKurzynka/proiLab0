/*
Autor : Michal Kurzynka, 271194
Prowadzacy: Wiktor Kusmirek
Numer zadania 0
*/

#include <iostream>
#include "calculatorFunctions.h"
using namespace std;

int main()
{
    double a, b, c;
    a = 0;
    b = 0;
    getInput(&a, &b);
    c = a + b;
    cout << "Wynik dodawania" << endl;
    cout << c << endl;
    return 0;
}
