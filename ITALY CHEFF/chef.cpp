#include "chef.h"

Chef::Chef() {

}

Chef::Chef(string name)
{
    chefName = name;

    cout << name << endl;
}

Chef::~Chef()
{
    cout << "Tämä on destruktori" << endl;
}

int Chef::makeSalad(int aines)
{
    int annokset;
    annokset = aines / 5;
    return annokset;
}

int Chef::makeSoup(int aines)
{
    int annokset;
    annokset = aines / 3;
    return annokset;
}
