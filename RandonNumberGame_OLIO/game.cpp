#include "game.h"

game::game(int mn) {

    maxNumber = mn;
    numOfGuesses = 0;

    srand(time(NULL));
    randonNumber =rand() % mn;

}

game::~game()
{

}

void game::play()
{
    while(playerGuess != randonNumber){
    cout << "Arvaa luku" << endl;
    cin >> playerGuess;
    ++numOfGuesses;


    if ( playerGuess == randonNumber){
        cout << "Oikein meni" << endl;
        printGameResult();

    } else if (playerGuess > randonNumber){
        cout << "Pienempi luku" << endl;

    }
    else if (playerGuess < randonNumber){
        cout << "Suurempi luku" << endl;

    }
    }
}

void game::printGameResult()
{
    cout << "Arvausten lukumäärä " << numOfGuesses << endl;
}

