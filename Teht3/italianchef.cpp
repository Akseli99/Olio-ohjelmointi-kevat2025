#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(string name):Chef(name) {
    cout<<"ItalianChef "<<chefName<<" [DEBUG]konstuktori "<<endl;
}

ItalianChef::~ItalianChef(){
    cout<<"ItalianChef "<<chefName<<" [DEBUG]dekonstruktori "<<endl;
}

int ItalianChef::makePizza(int flourAmount, int waterAmount){
    int pizzas = min(flourAmount / 5, waterAmount / 5);
    cout<<"ItalianChef "<<chefName<<" with "<<flourAmount<<" flour and "<<waterAmount<<" water can make "<<pizzas<<" pizzas"<<endl;
    return pizzas;
}

bool ItalianChef::askSecret(string givenPassword, int flourAmount, int waterAmount){
    if(givenPassword == password){
        cout<<"Password OK! "<<endl;
        makePizza(flourAmount, waterAmount);
        return true;
    }
    else{
        cout<<"incorrect password! "<<endl;
        return false;
    }
}
