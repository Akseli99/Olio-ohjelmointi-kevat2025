#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    int maxNum = 40;
    Game game(maxNum);
    game.play();
    game.printGameResult();

    return 0;
}
