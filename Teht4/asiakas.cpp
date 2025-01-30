#include "asiakas.h"
#include <iostream>
using namespace std;


Asiakas::Asiakas(string n, double luottoraja){
    nimi = n;
    kayttotili = new Pankkitili(n);
    luottotili = new Luottotili(n, luottoraja);
}

Asiakas::~Asiakas(){}


string Asiakas::getNimi(){
    return nimi;
}

void Asiakas::showSaldo(){
    cout<<"Asiakas: " <<nimi<<endl;
    cout<<"Pankkitilin saldo: "<<kayttotili->getBalance()<<" euroa"<<endl;
    cout<<"Luottotilin saldo: "<<luottotili->getBalance()<<" euroa"<<endl;
}

bool Asiakas::talletus(double amount){
    return kayttotili->deposit(amount);
}

bool Asiakas::nosto(double amount){
    return kayttotili->withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount){
    return luottotili->deposit(amount);
}

bool Asiakas::luotonNosto(double amount){
    return luottotili->withdraw(amount);
}

bool Asiakas::tiliSiirto(double amount, Asiakas &vastaanottaja){
    if (kayttotili->withdraw(amount)) {
        return vastaanottaja.talletus(amount);
    }
    return false;
}
