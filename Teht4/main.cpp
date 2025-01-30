#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitila.h"

using namespace std;

int main() {
    string name;
    cout<<"Anna nimi: "<<endl;
    cin>>name;
    Pankkitili tili(name);
    Luottotili luotto(name, 100);

    double pankkitalletus;
    cout<<"Paljonko haluat tallettaa pankkitilille: "<<endl;
    cin>>pankkitalletus;
    if (pankkitalletus < 0){
        cout << "Virhe: Talletuksen on oltava positiivinen summa."<<endl;
    } else {
        tili.deposit(pankkitalletus);
        cout<<"Tilin saldo: "<<tili.getBalance()<<endl;
    }

    double luottotalletus;
    cout<<"Paljonko haluat nostaa luottotililta: "<<endl;
    cin >> luottotalletus;
    if (luottotalletus < 0) {
        cout <<"Virhe: Noston on oltava positiivinen summa."<<endl;
    } else {
        if (luotto.withdraw(luottotalletus)) {
            cout<<"Nosto onnistui. Luottotilin saldo: "<<luotto.getBalance()<<endl;
        } else {
            cout<<"Nosto epaonnistui: Luottoraja ylitetty tai virheellinen summa."<<endl;
        }
    }

    return 0;
}
