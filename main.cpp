#include <iostream>

#include "przyjaciele.hpp"

using namespace std;

void is_in(Punkt pkt, Prostokat prs)
{
    if (prs.x <= pkt.x && pkt.x <= prs.x + prs.szerokosc && prs.y <= pkt.y && prs.y <= prs.y + prs.wysokosc)
    {
        cout << "punkt " << pkt.nazwa << " należy do prostokąta" << endl;
    }
    else 
    {
        cout << "punkt " << pkt.nazwa << " nie należy do prostokąta" << endl;
    }

    return;
}

int main()
{
    Punkt p1("A", 2, 4);
    Prostokat pp1("ABCD", 2, 4, 10, 4);

    is_in(p1, pp1);

    return 0;
}