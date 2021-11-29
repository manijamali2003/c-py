#ifndef PYTHON_HPP
#define PYTHON_HPP

#include <iostream>

using namespace std;

void print (string str)
{
    cout << str << endl;
}

string input (string str)
{
    cout << str;
    string input_;
    cin >> input_;
    return input_;
}

#endif