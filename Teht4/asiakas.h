#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include "pankkitila.h"
#include "luottotili.h"
using namespace std;

class Asiakas
{
public:
    Asiakas(string, double luottoraja);
    virtual ~Asiakas();
    string getNimi();
    void showSaldo();
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
    bool tiliSiirto(double amount, Asiakas &);
private:
    string nimi;
    Pankkitili* kayttotili;
    Luottotili* luottotili;
};

#endif // ASIAKAS_H
