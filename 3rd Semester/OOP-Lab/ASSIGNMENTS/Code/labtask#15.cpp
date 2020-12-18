#include <iostream>
#include <string>
#include "fruit.h"
using namespace std;

int main()
{
    Fruit *f;
    Apple a;
    f = &a;
    f->taste();
    Grapes g;
    f = &g;
    f->taste();
    return 0;
}