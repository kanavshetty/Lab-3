#pragma once
#include<iostream>
class llh{
private:
    int  littles = 0;
    int lots = 0;
    int heaps = 0;

public:
    llh();
    llh(int littles, int lots, int heaps);
    llh(int littles);
    void setLittles(int littles);
    int getLittles();
    void setLots(int lots);
    int getLots();
    void setHeaps(int heaps);
    int getHeaps();
    llh operator+(const llh& obj);
    llh operator-(const llh& obj);
    llh operator*(const llh& obj);
    llh operator/(const llh& obj);
    bool operator==(const llh& obj);
    void simplify();
};