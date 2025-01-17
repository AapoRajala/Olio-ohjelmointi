#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class game
{
public:
    game(int);
    ~game();

    void play();

private:
    int maxNumber;
    int playerGuess;
    int randonNumber;
    int numOfGuesses;

    void printGameResult();
};

#endif // GAME_H
