#include <bits/types/FILE.h>
#include <iostream>
#include <string>

using namespace std;

class Prostokat;

class Punkt
{
    private:
    string nazwa;
    float x, y;
    public:
    Punkt(string="A", float=0, float=0);
    void wczytaj();
    friend void is_in(Punkt pkt, Prostokat prs);

};

class Prostokat
{
    private:
    string nazwa;
    float x, y, szerokosc, wysokosc;
    public:
    Prostokat(string="none", float=0, float=0, float=1, float=1);
    friend void is_in(Punkt pkt, Prostokat prs);

};