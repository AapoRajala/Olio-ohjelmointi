#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("Gordon");
    cout << "salaatti annoksien lukumäärä " << chef.makeSalad(20) << endl;
    cout << "Soppa annosten lukumäärä " << chef.makeSoup(18) << endl;

    ItalianChef ItalianChef("Mario");

    ItalianChef.askSecret("pizza" , 10, 20);

    return 0;
}
