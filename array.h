#pragma once
#include <iostream>

using namespace std;


class Array {
private:
    int size;
    int step;
    int* array;
    int real_size;


public:
    Array(int size = 1, int step = 1);
    ~Array();
    void expandArray(int);
    void setValue(int);
    void showElements();
    int getSize();
    int getElemSize();
    void setArray(int*, int);

};