#include "Luottotili.h"

Luottotili::Luottotili(std::string nimi, double raja) : Pankkitili(nimi), luottoRaja(raja) {
    std::cout<<"Pankki- ja luottotili luotu "<<nimi<<":lle"<<" Luottoraja: "<<raja<<std::endl;
}

bool Luottotili::withdraw(double amount) {
    if (amount < 0 || (saldo - amount) < -luottoRaja) return false;
    saldo -= amount;
    std::cout<<"Luottotili: nosto "<<amount<<" tehty. "<<"Saldoa jaljella: "<<saldo<<std::endl;
    return true;
}
