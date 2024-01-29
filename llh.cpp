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

const int llh::getLittles() {
    return littles;
}

void llh::setLots(int lots) {
    this->lots = lots;
}

const int llh::getLots() {
    return lots;
}

void llh::setHeaps(int heaps) {
    this->heaps = heaps;
}

const int llh::getHeaps() {
    return heaps;
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
llh llh::operator+(const llh& obj){
    llh temp;
    temp.setLittles(this->littles + obj.littles);
    temp.setLots(llh::lots + obj.lots);
    temp.setHeaps(llh::heaps + obj.heaps);
    temp.simplify();
    return temp;
};

llh llh::operator-(const llh& obj){
    llh temp;
    temp.setLittles(this->littles - obj.littles);
    temp.setLots(this->lots - obj.lots);
    temp.setHeaps(heaps - obj.heaps);

    if(temp.littles<0){
        temp.setLots(temp.lots - (temp.littles / 7) +1);
        temp.setLittles(7 - abs(temp.littles%7));
    }

    if(temp.lots<0){
        temp.setHeaps(temp.heaps - ((temp.lots) / 23) +1);
        temp.setLots(23- abs(temp.littles%23)) ;
    }

    temp.simplify();
    return temp;
};

bool llh::operator==(const llh& obj){
    return (littles == obj.littles) &&
           (lots == obj.lots) &&
           (heaps == obj.heaps);
}

llh llh::operator*(const llh& obj) {
    llh temp;
    
    temp.setLittles(littles * obj.littles);
    temp.setLots(lots * obj.lots);
    temp.setHeaps(heaps * obj.heaps);
    temp.simplify();
    return temp;
}

