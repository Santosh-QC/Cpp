#include "test1.h"
#include <iostream>
using namespace std;

test1::test1()
{

}

void test1 :: regularfunc(){
    cout << "i am a regular function" << endl;
}

void test1 :: constfunction() const{
    cout << "i am a constant function" << endl;
}
