#include "pankkitila.h"

Pankkitili::Pankkitili(string nimi):omistaja(nimi), saldo(0) {
}
Pankkitili::~Pankkitili(){}

double Pankkitili::getBalance() const {
    return saldo;
}

bool Pankkitili::deposit(double amount) {
    if (amount < 0) return false;
    saldo += amount;
    return true;
}

bool Pankkitili::withdraw(double amount) {
    if (amount < 0 || amount > saldo) return false;
    saldo -= amount;
    return true;
}
