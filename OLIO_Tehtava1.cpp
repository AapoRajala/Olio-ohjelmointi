#include <iostream>

using namespace std;
int game(int maxnum);

int main()
{
    int Arvaukset = 0;
    int maxnum = 40;
    Arvaukset = game(maxnum);
    cout << "Arvauksia " << Arvaukset << endl;

    return 0;
}
int game(int maxnum){

    int luku = 0;
    int arvaus = 0;
    int Arvaukset =0;

   // Luku = 7 Testikoodia

    srand(time(NULL));
    luku =rand() % maxnum;

   // cout << "Luku" << luku << endl; Testikoodia




    while(arvaus != luku)
    {


        if (arvaus == luku){
            cout << "Oikein meni" << endl;
            break;}

        cout << "Anna luku " << endl;
        cin >> arvaus;
        Arvaukset++;

        if (arvaus > luku){
            cout << "Luku on pienempi" << endl;
        }
        else if (arvaus < luku){
            cout << "Luku suurempi" << endl;
        }
    }
    cout << "Oikein!" << endl;
   // cout << "Arvauksia " << Arvaukset << endl;

    return Arvaukset;

}
