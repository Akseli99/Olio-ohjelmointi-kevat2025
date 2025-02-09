#include "notifikaattori.h"
#include "seuraaja.h"

notifikaattori::notifikaattori() {
    cout<<"Luodaan notifikaattori"<<endl;
}

void notifikaattori::lisaa(seuraaja *s){
    if (seuraajat == nullptr){
        seuraajat = s;
        cout<<"Notifikaattori lisaa seuraajan "<<s->getNimi()<<endl;
        return;
    }
    s->next = seuraajat;
    seuraajat = s;
    cout<<"Notifikaattori lisaa seuraajan "<<s->getNimi()<<endl;
}

void notifikaattori::poista(seuraaja *s){
    seuraaja *ptr = seuraajat; //luotiin loop-muuttuja, joka on alustettu listan alkuun
    if (ptr == nullptr){
        cout<<"Listalla ei ole poistettavaa"<<endl;
        return;
    }
    while (ptr->next != nullptr){
        if (ptr->next==s){
            ptr->next = ptr->next->next;
        }
        ptr = ptr->next;
        cout<<"Notifikaattori poistaa seuraajan "<<s->getNimi()<<endl;
    }

}
void notifikaattori::tulosta(){
    seuraaja *ptr = seuraajat; //luotiin loop-muuttuja, joka on alustettu listan alkuun
    while (ptr->next != nullptr){
        cout<<"Seuraaja "<<ptr->getNimi()<<endl;
        ptr = ptr->next;
    }
    cout<<"Seuraaja "<<ptr->getNimi()<<endl;
}

void notifikaattori::postita(string v){
    cout<<"Notifikaattori postaa viestin: "<<v<<endl;
    seuraaja *ptr = seuraajat; //luotiin loop-muuttuja, joka on alustettu listan alkuun
    while (ptr->next != nullptr){
        ptr->paivitys(v);
        ptr = ptr->next;
    }
    ptr->paivitys(v);

}
