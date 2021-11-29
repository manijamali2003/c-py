#include <iostream>
#include "python.hpp"
#include <stdio.h>

using namespace std;


int main ()
{
    open f = open("readme.txt","w");
    f.write ("Welcome to My app");
    f.close();
    return 0;
}