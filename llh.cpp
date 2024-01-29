#include "llh.h"

// Default constructor
llh::llh() : littles(0), lots(0), heaps(0) {}


// Overloaded constructor for "littles" attribute
llh::llh(int littles) {
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

