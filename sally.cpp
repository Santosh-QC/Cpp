#include "sally.h"
#include <iostream>
using namespace std;

sally::sally(int a, int b)
: regularvar(a), var(b)
{
}

void sally::print(){
    cout << "i am a regular variable: " << regularvar << " i am a constant variable: " << var << endl;
}

