#include <iostream>
#include "python.hpp"

using namespace std;

int main ()
{
    print ("Hello World");
    print ("Welcome to Pythonic C++");

    string name;
    name = input ("Enter your name: ");
    print (name);

    exit(0);

    return 0;
}