#include <iostream>
#include <cstdlib>

using namespace std;
int game(int maxnum);
int satunnaisLuku;
bool oikeaVastaus;
int maxnum = 40;

int main() {
    int siemenLuku = 5;
    srand(siemenLuku);  // Asettaa siemenluvun arvoksi
    cout << "Arvaa luku valilta 1-"<<maxnum<< endl;// Pyydetään käyttäjältä arvaus, ja vasta sitten tarkistetaan
    game(maxnum);

    return 0;
}
int game(int maxnum){
    int satunnaisLuku = rand() % maxnum + 1;  // Arpoo satunnaisen luvun väliltä 1-20
    int arvaus;
    bool oikeaVastaus = false;
    int arvaustenMaara = 0;

    while (oikeaVastaus == false) {
        cin >> arvaus;  // Pyydetään käyttäjältä arvausta
        arvaustenMaara++;

        // Tarkistetaan arvaus
        if (arvaus == satunnaisLuku) {
            cout << "Oikea vastaus!" << endl;
            oikeaVastaus = true;  // Asetetaan oikeaVastaus todeksi, jolloin silmukka päättyy
            cout <<"Arvauksia oli yhteensa "<<arvaustenMaara<<endl;
        }
        else if (arvaus < satunnaisLuku) {
            cout << "Oikea vastaus on suurempi" << endl;
        }
        else if (arvaus > satunnaisLuku) {
            cout << "Oikea vastaus on pienempi" << endl;
        }
    }
    return arvaustenMaara;
}
