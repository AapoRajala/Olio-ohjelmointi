#include "italianchef.h"


ItalianChef::ItalianChef() {


    cout << "Tämä on konstraktori, ItalianChef" << endl;

}

ItalianChef::ItalianChef(string name)
{
    cout << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Tämä on Destruktori, ItalianChef" << endl;

}

bool ItalianChef::askSecret(string salasana, int f, int w)
{

    if (salasana.compare(password) == 0)
    {
        water = w;
        flour = f;


       makePizza();
        return true;
    }

}

int ItalianChef::makePizza(){
   // cout << "annettu salasana ok!" << endl;


    int annostenmaara = 0;
   while (water > 4 && flour > 4){
        annostenmaara++;
       water= water-5;
        flour= flour-5;
   }
   cout << "annokset: " << annostenmaara << endl;

}


