#include "chef.h"
#include <iostream>


Chef::Chef(string name):chefName(name) {
    cout<<"Chef "<<chefName<<" [DEBUG]konstruktori "<<endl;
}

Chef::~Chef(){
    cout<<"Chef "<<chefName<<" [DEBUG]destruktori "<<endl;
}

string Chef::getName() const{
    return chefName;
}

int Chef::makeSalad(int ingredients){
    int portions = ingredients / 5;
    cout<<"Chef "<<chefName<<" with "<<ingredients<<" items can make salad "<<portions<<" portions "<<endl;
    return portions;
}

int Chef::makeSoup(int ingredients){
    int portions = ingredients / 3;
    cout<<"Chef "<<chefName<<" with "<<ingredients<<" items can make soup "<<portions<<" portions "<<endl;
    return portions;
}
