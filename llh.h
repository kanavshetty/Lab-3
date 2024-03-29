#pragma once
#include<iostream>
#include<string>
class llh{
private:
    int  littles = 0;
    int lots = 0;
    int heaps = 0;
    void simplify(); //Private because only accessed by member functions
    int convert_to_little() const; //Private because only accessed by member functions

public:
    llh();
    llh(int littles, int lots, int heaps);
    llh(int littles);
    void setLittles(int littles);
    const int getLittles();
    void setLots(int lots);
    const int getLots();
    void setHeaps(int heaps);
    const int getHeaps();
    llh operator+(const llh& obj);
    llh operator-(const llh& obj);
    llh operator*(const llh& obj);
    llh operator/(const llh& obj);
    bool operator==(const llh& obj);
    operator std::string() const;
};
