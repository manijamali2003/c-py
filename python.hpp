#ifndef PYTHON_HPP
#define PYTHON_HPP

#include <iostream>
#include <stdio.h>

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

void exit ()
{
    exit (0);
}

class open
{
    
    private:
        FILE * file;
    public:
        open  (const char* filename,const char* type)
        {
            file = fopen (filename,type);
        }
        void write (const char* str)
        {
            fputs (str,file);
        }

        void close ()
        {
            fclose (file);
        }
};

#endif