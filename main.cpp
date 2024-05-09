#include <iostream>
#include "array.h"

using namespace std;

    
int main()
{
    Array arr;
    arr.setValue(6);
    arr.setValue(60);
    arr.setValue(40);
    arr.showElements();
    cout << "\n" << endl;
    int sunchez[5] = { 3, 2, 8, 4, 228 };
    arr.setArray(sunchez,5);
    arr.showElements();
}
