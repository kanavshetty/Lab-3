#pragma once
#include<iostream>
class llh{
private:
    int  littles = 0;
    int lots = 0;
    int heaps = 0;

public:
    llh(){};
    llh(int littles, int lots, int heaps){}
    llh(int littles){}
    void setLittles(){};
    int getLittles(int littles){};
    void setLots(){};
    int getLots(int lots){};
    void setHeaps(){};
    int getHeaps(int heaps){};
};