#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main(){
    Chef basicChef("Gordon ");
    basicChef.makeSalad(11);
    basicChef.makeSoup(14);

    ItalianChef italianChef("Mario ");
    italianChef.makeSalad(9);
    italianChef.askSecret("pizza", 12, 12);
    return 0;
}
