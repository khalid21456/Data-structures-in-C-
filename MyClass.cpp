#include <iostream>
#ifndef MYCLASS_H
#define MYCLASS_H
using namespace std;
class MyClass {

public :
    int a;

    MyClass (int a) {
        this->a = a;
    }

    void afficherA() {
        cout<<a;
    }

};

#endif // MYCLASS_H
