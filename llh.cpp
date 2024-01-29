#include "llh.h"

// Default constructor
llh::llh() : littles(0), lots(0), heaps(0) {}

// Overloaded constructor for all attributes
llh::llh(int littles, int lots, int heaps) : littles(littles), lots(lots), heaps(heaps) {}

// Overloaded constructor for "littles" attribute
llh::llh(int littles) {
    simplify();
}

void llh::setLittles(int littles) {
    this->littles = littles;
}

int llh::getLittles() {
    return littles;
}

void llh::setLots(int lots) {
    this->lots = lots;
}

int llh::getLots() {
    return lots;
}

void llh::simplify(){
    if (littles > 7) {
        lots += littles / 7;
        this->littles = littles % 7;
    } else {
        this->littles = littles;
    }

    if (lots > 23) {
        heaps += lots / 7;
        lots %= 7;
    }
}
llh operator+(const llh& obj){
    llh temp;
    temp.setLittles(littles + obj.getLittles());
    temp.setLots(lots + obj.getLots());
    temp.setHeaps(heaps + obj.getHeaps());
    temp.simplify();
    return temp;
};

llh operator-(const llh& obj){
    llh temp;
    temp.setLittles(littles - obj.getLittles());
    temp.setLots(lots - obj.getLots());
    temp.setHeaps(heaps - obj.getHeaps());

    if(temp.getLittles()<0){
        temp.setLots(temp.getLots() - ((temp.getLittles()) / 7) +1);
        temp.setLittles(7 - abs(temp.getLittles()%7));
    }

    if(temp.getLots()<0){
        temp.setHeaps(temp.getHeaps() - ((temp.getLots()) / 23) +1);
        temp.setLots(23- abs(temp.getLittles()%23)) ;
    }

    temp.simplify();
    return temp;
};

