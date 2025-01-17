#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int maxNum):maxNumber(maxNum),playerGuess(0),numOfGuesses(0) {
    srand(time(0)); //time-funktiota käyttämällä saamme joka kerta uuden siemenluvun
    randomNumber = rand() % maxNumber + 1;
    cout << "[DEBUG] GAME CONSTRUCTOR, maxNumber = " << maxNumber << ", randomNumber = " << randomNumber << endl;
}

Game::~Game(){
    cout << "[DEBUG] GAME DESTRUCTOR" << endl;
}

void Game::play(){
    cout << "Arvaa luku valilta 1-" << maxNumber << endl;
    while (true){
        cin >> playerGuess; //Pelaaja syöttää oman arvauksensa
        numOfGuesses++;
        if (playerGuess == randomNumber){ //Verrataan arvausta arvottuun lukuun
            cout << "oikea vastaus!" << endl;
            cout << "[DEBUG] playerGuess = " << playerGuess << endl; //", numberOfGuesses = " << numOfGuesses << endl;
            break;
        }
        else if (playerGuess < randomNumber){
            cout << "Oikea vastaus on suurempi." << endl;
        }
        else{
            cout << "Oikea vastaus on pienempi." << endl;
        }
    }
}

void Game::printGameResult(){
    cout << "[DEBUG] printGameResult kutsuttu" << endl;
    cout << "Arvausten maara: " << numOfGuesses << endl;
}
