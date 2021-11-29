#include <iostream>
#include "python.hpp"
#include <stdio.h>

using namespace std;


int main ()
{
    open f = open("readme.txt","r");
    print (f.read());
    f.close();
    return 0;
}