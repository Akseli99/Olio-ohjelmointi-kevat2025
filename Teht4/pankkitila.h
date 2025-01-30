#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;
#include <string>

class Pankkitili
{
public:
    Pankkitili(string nimi);
    virtual ~Pankkitili();
    double getBalance() const;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
