#include <iostream>

using namespace std;

#ifndef CHEF_H
#define CHEF_H

class Chef
{
public:
    Chef();
    Chef(string);
    ~Chef();

    string getName();
    int makeSalad(int aines);
    int makeSoup(int aines);

protected:
    string chefName;


};


#endif // CHEF_H
