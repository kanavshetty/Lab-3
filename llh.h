#include<iostream>
class LLH{
private:
    int  littles = 0;
    int lots = 0;
    int heaps = 0;

public:
    LLH(){};
    LLH(int littles, int lots, int heaps){
        if(littles>7){
            lots += littles/7;
            littles %= 7;
        }
        littles += littles;
        if(lots>23){
            heaps += lots/7;
            lots %= lots;
        }
        lots += lots;
        heaps += heaps;
    }
};