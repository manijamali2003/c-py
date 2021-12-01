#ifndef PYTHON_HPP
#define PYTHON_HPP

#include <iostream>
#include <stdio.h>

using namespace std;

void print (string str)
{
    cout << str << endl;
}

void print (int value)
{
    cout << value << endl;
}

void print (bool value)
{
    cout << value << endl;
}

void print (long value)
{
    cout << value << endl;
}

void print (short value)
{
    cout << value << endl;
}

void print (double value)
{
    cout << value << endl;
}

void print (float value)
{
    cout << value << endl;
}

void print (unsigned short value)
{
    cout << value << endl;
}

void print (unsigned int value)
{
    cout << value << endl;
}

void print (unsigned long value)
{
    cout << value << endl;
}

void print (char value)
{
    cout << value << endl;
}

void print (const char* value)
{
    cout << value << endl;
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

        string read ()
        {
            char str[1000];
            return fgets (str,1000,file);
        }

        void close ()
        {
            fclose (file);
        }
};

#endif