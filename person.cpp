#include "person.h"
#include <iostream>
using namespace std;

person::person(string x, brithday bo)
: name(x), dob(bo)
{

}

void person ::printinfo(){
    cout << name << " was born on ";
    dob.printmsg();

}
