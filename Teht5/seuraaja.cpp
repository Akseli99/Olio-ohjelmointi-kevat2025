#include "seuraaja.h"
#include "notifikaattori.h"

seuraaja::seuraaja(string n) {
    nimi = n;
    cout << "Seuraaja '"<<nimi<<"' luotu."<<endl;
}

void seuraaja::paivitys(string viesti){
    cout<<"Seuraaja "<<nimi<<" sai viestin: "<<viesti<<endl;
}

string seuraaja::getNimi(){
    return nimi;
}
