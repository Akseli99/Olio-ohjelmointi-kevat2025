#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitila.h"
using namespace std;

class Luottotili: public Pankkitili
{
public:
    Luottotili(string nimi, double raja);
    bool withdraw(double amount) override;
protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
