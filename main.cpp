#include <iostream>

using namespace std;

void funcdob(int x){
    cout << "my dob is " << x << endl;
}

int main(){
    funcdob(1994);
    return 0;
}
//

#include <iostream>
#include <string>

using namespace std;

class Test{
    public:
        void printtext(){
            string x;
            cout << "enter you name sucker: ";
            cin >> x ;
            name = x;
        }
        void printname(){
            cout << " My name is " << name << endl;
        }


    private:
        string name;
};

int main(){
    Test obj;
    obj.printtext();
    obj.printname();
}


#include <iostream>
#include <string>

using namespace std;

class constructor{
    public:
        constructor(string z){
            getname(z);
        }
        void getname(string x){
            name = x;
        }
        setname(){
            cout << "My name is :" << name << endl;
            }

    private:
        string name;
};

int main(){
    constructor obj("santosh kumar sahoo");
    obj.setname();

    constructor obj1(" i am 183 cm tall");
    obj1.setname();
};

// while loop example
#include <iostream>

using namespace std;

int main(){
    int x = 1;
    int number;
    int total = 0;

    while (x <= 5){
           cin >> number;
           total = total + number;
           x++;
    }

    cout << "total is :" << total;

}


#include <iostream>
using namespace std;

int main(){

    int age = 0;
    int total = 0;
    int numberofpeople = 0;

    cout << "Enter the age or -1 to exit" << endl;
    cin >> age;
    while (age != -1){
        total = total + age;
        numberofpeople++;
        cout << "Enter the age or -1 to exit" << endl;
        cin >> age;
    }

    cout << "total age is " << total << endl;
    cout << "number of people is: " << numberofpeople << endl;
    cout << "average age of them is :" << total/numberofpeople << endl;

}

// for loop example
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
    int a;
    int p = 10000;
    float i = 0.03;
    int day;

    for (day=1; day<=30; day++){
        a = p * pow(1+i, day);
        cout << "day" << day << "---------" << a << endl;
    }


}
// random number generator
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    srand(time(0));

    for (int i=1; i<25; i++){
        cout << 1+rand()%6 << endl ;
    }


}

// function commandline
#include <iostream>
#include <string>

using namespace std;

int test(int a=1, int b=1, int c=1);

int main(){

    int a, b, c;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cout << test(a, b , c);
}

int test(int a, int b, int c){

    return a*b*c;
}
// scope resoultion
#include <iostream>
using namespace std;

int x = 20;
int main(){
    int x = 10;
    cout << ::x <<endl;

}
// function overloading
#include <iostream>
using namespace std;
#include <string>

void printfunc(int a){
    cout << "this is an integer: " << a << endl;
}

void printfunc(float b){
    cout << "this is a float: " << b << endl;
}

void printfunc(char c){
    cout << "this is a char: " << c << endl;
}

int main(){
    int a = 20;
    float b = 30.4;
    char c = 'n';

    printfunc(a);
    printfunc(b);
    printfunc(c);

}

// Recursion
#include <iostream>

using namespace std;
int factorial(int x){
    if (x == 1){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }

}


int main(){
    cout << "factorial of number is :" << factorial(5) << endl;

}
// array using loops

#include <iostream>

using namespace std;

int main(){

    int arr[9];
    int num = 99;
    for(int i=0; i<=8; i++ ){
        arr[i] = num;
        cout << i << "------------------" << arr[i] << endl;
    }

}

// using array in calculations

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "enter the number of array elements: " << endl;
    cin >> n;
    int arr[n];
    int num;
    for (int i=0; i<=n-1; i++){
        cout << "enter the array element: " << endl;
        cin >> num;
        arr[i] = num;
        cout << i << "------------------------" << num << endl;
    }

    int sum=0;
    for (int i=0; i<=n-1; i++){
        sum += arr[i];
        cout << sum << endl;
    }

}
// passing array to function
#include <iostream>

using namespace std;

void printarray(int anarray[], int sizeofarray);

int main(){
    int array1[] = {10,20,30};
    int array2[] = {11,21,31,89,78};
    printarray(array1, 3);
    printarray(array2, 6);

}

void printarray(int anarray[], int sizeofarray){
    for (int i=0; i <= sizeofarray-1 ; i++){
        cout << anarray[i] << endl;
    }
}

// mutidimensional array
#include <iostream>

using namespace std;

int main(){

    int array1[2][3] = {{2,3,4},{5,6,7}};

    for (int row=0; row<2; row++){
        for (int column=0; column<3; column++){
            cout << array1[row][column] << " " << endl;
        }
        cout << endl;
    }

}

// pass by value and pass by reference

#include <iostream>

using namespace std;
void passbyval(int x);
void passbyref(int *y);

int main(){
    int a = 9;
    int b = 10;
    passbyval(a);
    passbyref(&b);

    cout << a << endl;
    cout << b << endl;
}

void passbyval(int x){
    x = 69;
}

void passbyref(int *y){
    *y = 69;
}

#include <iostream>

using namespace std;

int main(){
    int x = 19;
    cout << sizeof(x) << endl;

    char c = 'c';
    cout << sizeof(c) << endl;

    float f = 3.0;
    cout << sizeof(f) << endl;

    double arr[10];
    cout << sizeof(arr) << endl;

}

#include <iostream>

using namespace std;

int main(){

    int arr[10];

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;

    int *ptr1 = &arr[0];
    cout << ++ptr1 << endl;
}

// arrow memeber selection operator

#include <iostream>
#include "test.h"
using namespace std;

int main(){
    test testobj;
    testobj.printcrap();

    test *testpointer = &testobj;

    testpointer -> printcrap();
}

// deconstrcutors

// const objects

#include <iostream>
#include "test1.h"
using namespace std;

int main(){

    const int x = 10;
    cout << x << endl;

    test1 obj;

    test1 *testptr = &obj;
    testptr -> regularfunc();

    testptr -> constfunction();

}
//member initializers
#include <iostream>
#include "sally.h"
using namespace std;

int main(){
    sally obj(10, 20);
    obj.print();
}
// composition

#include <iostream>
using namespace std;
#include "person.h"
#include "brithday.h"

int main(){
    brithday obj(02,04,1994);
    person san("santosh", obj);
    san.printinfo();

}
// overloading
#include "overloading.h"
#include <iostream>
using namespace std;

int main(){
    overloading a(34);
    overloading b(21);
    overloading c;

    c = a+b;
    cout << c.num << endl;

};

//inheritance, protected, private, public
#include "mother.h"
#include <iostream>
#include "daughter.h"

using namespace std;

int main(){
//    mother obj;
//    obj.printname();

    daughter obj1;
    obj1.printsomething();

}

derived class constrictors and deconstructors

#include "mother.h"
#include <iostream>
#include "daughter.h"

using namespace std;

int main(){
    //mother obj;
    daughter tina;

}

// polymorphism

#include <iostream>

using namespace std;

class fighter{
    protected:
        int attackpower;
    public:
        void setattackpower(int a){
        attackpower = a;
        }
};

class ninja: public fighter{
    public:
        void attack()
        {cout << "this is a ninja with attackpower - " << attackpower << endl;}

};

class animal: public fighter{
    public:
        void attack()
        {
            cout << "This is an animal with kill power - " << attackpower << endl;
        }
};

int main(){
    ninja n;
    animal m;
    fighter *enemy1 = &n;
    fighter *enemy2 = &m;

    enemy1->setattackpower(29);
    enemy2->setattackpower(30);

    n.attack();
    m.attack();

}

// Virtual functions

#include <iostream>
using namespace std;

class enemy{
public:
    void virtual attack(){
        cout << "this is an attack base class" << endl;
    }
};

class ninja: public enemy{
public:
    void virtual attack(){
    cout << "this is ninja attack" << endl;}
};

class animal: public enemy{
public:
    void virtual attack(){
    cout << "this is an animal attack" << endl;}
};

int main(){

    ninja n;
    animal m;

    enemy *enemy1 = &n;
    enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
}

//Pure virtual function and abstract class

#include <iostream>
using namespace std;

class enemy{
public:
    void virtual attackpower()=0;
//    {
//    cout << "this is the base class" << endl;
//    }
};

class ninja: public enemy{
public:
    void virtual attackpower(){
    cout << "this is ninja attack pwoer " << endl;}
};

class monster:public enemy{
public:
    void virtual attackpower()
    {
    cout << "this is monster attackpower " << endl;
    }

};

int main(){
    ninja n;
    monster m;

    enemy *enemy1 = &n;
    enemy *enemy2 = &m;

    enemy1->attackpower();
    enemy2->attackpower();

};

// function templates

#include <iostream>
using namespace std;

template <class calc>

calc add(calc a, calc b)
{
    return a + b;
}

int main(){
    int a,b,z;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;

    z = add(a, b);
    cout << "the addition is : " << z << endl;

};

// function template with multiple paramters

#include <iostream>
using namespace std;

template <class one, class two>
one smaller(one a, two b)
{
    return (a>b?b:a);
}

int main(){
    int a = 50;
    float b = 10.9;
    cout << "the smaller among the two numbers is : " << smaller(a,b) << endl;
}

// class templates

#include <iostream>

using namespace std;

template <class test>

class testclass{
    test first, second;
public:
    testclass (test a, test b){
    first = a;
    second = b;
    }
    test greater();
};

template <class test>
test testclass<test>::greater(){
    return (first>second?first:second);

}

int main(){
    testclass<int> obj(10,20);
    cout << "greater number is : " << obj.greater() << endl;

}

//template specialization

#include <iostream>
using namespace std;

template <class T>
class datatype{
public:
    datatype(T x){
    cout << x << " : is not a character." << endl;}

};

template<>
class datatype<char>{
public:
    datatype(char x){
    cout << x << " : is a character." << endl;}
};

int main(){
    datatype<int> obj1( 7);
    datatype<char> obj2( 'a');
    datatype<float> obj3( 20.1);

}

//exception

#include <iostream>
#include <string>
using namespace std;

int main(){
    try{
        int x = 80;
        int y = 90;

        if (x < y){
            throw 88;
        }
        else{
            cout << " x is greater than y" << endl;
        }
    }

    catch(int a){
        cout << "error came up " << a << endl;
    }

}

// File handling
#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream fileoject("Test.txt");
    if (fileoject.is_open()){
        cout << "file is in open state" << endl;
    }
    else{
        cout << "something is wrong" << endl;
    }
    fileoject << "This is a test string, going into test file \n";
    fileoject.close();

}

// reading from file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fileobject("test.txt");
    string text1;
    while(fileobject >> text1){
        cout << text1 << ' ' ;
    }
}

// string class and operations

//using getline
#include <iostream>
#include <string>
using namespace std;

int main(){
    string test;
    getline(cin, test);
    cout << "printed line : " << test << endl;
}

//using copy
#include <iostream>
#include <string>
using namespace std;

int main(){
    string test;
    string test1;
    string test2;
    getline(cin, test);

    test1.assign(test);
    test2.assign(test1);
    cout << "printed line : " << test << test1 << test2 << endl;
}

//looping over a string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string test;
    getline(cin ,test);
    for (int i=0; i<test.length(); i++){
            cout << "printed line : " << test.at(i) << endl;
    }

}

//looping over a string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string test{"This is a test C++ code"};
    cout << test.substr(2,6) << endl;
}

//Swap string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = "san";
    string b = "man";
    cout << a << b << endl;

    a.swap(b);
    cout << a << b << endl;
}

// string find and rfind
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a1 = "ham is spam oh yes i am";
    cout << a1.find("am") << endl;

    cout << a1.rfind("am") << endl;
}

// string erase
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a1 = "ham is spam oh yes i am";
    cout << a1 << endl;

    a1.erase(5);
    cout << a1 << endl;
}

 // string replace
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a1 = "ham is spam oh yes i am";
    cout << a1 << endl;

    a1.replace(7, 4, "scam");
    cout << a1 << endl;
}

// string insert
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a1 = "ham is spam oh yes i am";
    cout << a1 << endl;

    a1.insert(7, "scam ");
    cout << a1 << endl;
}

