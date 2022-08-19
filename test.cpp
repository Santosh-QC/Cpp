#include "test.h"
#include <iostream>
using namespace std;

test::test()
{
    cout << "i am a constructor" << endl;
}

void test::printcrap(){
    cout << "this is a test message" << endl;
}

test :: ~test(){
    cout << "i am a destrcutor" << endl;

}
