#include "array.h"
#include <iostream>

Array::Array(int size, int step) {
    this->size = size > 1 ? size : 1;
    this->step = step > 1 ? step : 1;
    real_size = 0;
    array = new int[size];
      
}

Array::~Array() {
    delete[] array;
}

void Array::expandArray(int delta) {
    int* array_prom = new int[size+delta];
    for (int i = 0; i < this->size; i++) {
        array_prom[i] = array[i];
    }
    delete[] array;
    array = array_prom;
    size = size + delta;

}

void Array::setValue(int val) {
    if (size >= real_size) {
        expandArray(size + step);
        array[real_size] = val;
        real_size++;
    }
    else {
        array[real_size] = val;
        real_size++;
    }
}

void Array::showElements() {
    for (int i = 0; i < real_size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int Array::getSize() {
    return size;
}
int Array::getElemSize() {
    return real_size;
}

void Array::setArray(int* pArr, int size_mass) {
    if (size_mass + real_size > size) {
        expandArray(size_mass);
    }
    int j = 0;
    for (int i = real_size; i < size; i++) {
        array[i] = pArr[j];
        j++;
    }
    real_size += size_mass;
}