#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
using namespace std;

#include "classb.h"

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    string getBinfo();
    void setBinfo(string);
};

#endif // ASSOSIATIONA_H
