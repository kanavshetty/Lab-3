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


