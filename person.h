#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "brithday.h"
using namespace std;

class person
{
    public:
        person(string x, brithday bo);
        void printinfo();

    private:
        string name;
        brithday dob;
};

#endif // PERSON_H
