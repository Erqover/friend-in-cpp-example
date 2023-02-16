#include <iostream>
#include <string>
#include "przyjaciele.hpp"

using namespace std;

Punkt::Punkt(string a, float xx, float yy)
{
    nazwa = a;
    x = xx;
    y = yy;
}
void Punkt::wczytaj()
{
    cout << "podaj nazwę" <<endl;
    cin >> nazwa;
    cout << "podaj x" << endl;
    cin >> x;
    cout << "podaj y" << endl;
    cin >> y;
}

Prostokat::Prostokat(string n, float xx, float yy, float sz, float wy)
{
    nazwa = n;
    x = xx;
    y = yy;
    szerokosc = sz;
    wysokosc = wy;
}