#include <iostream>
using namespace std;
#include "brithday.h"

brithday::brithday(int x, int y, int z)

{
        day = x;
        month = y;
        year = z;
}

void brithday :: printmsg(){
    cout << day <<  "/" <<  month << "/" <<  year << "/" << endl;
}
