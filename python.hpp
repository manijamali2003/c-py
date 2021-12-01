#ifndef PYTHON_HPP
#define PYTHON_HPP

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <unistd.h>

using namespace std;

/* Private functions */
string _getcwd ()
{
    char *run_dir = (char *) malloc (1024);
    if (getcwd(run_dir, 1024) != NULL)
    {
        return run_dir;
    }
    else
    {
        return "/";
    }
}

void _system (string command)
{
    system (command.c_str());
}
void _exit ()
{
    exit(0);
}
void _exit (short i)
{
    exit(i);
}
void _exit (int i)
{
    exit(i);
}
void _exit (long i)
{
    exit(i);
}
void _exit (unsigned short i)
{
    exit(i);
}
void _exit (unsigned int i)
{
    exit(i);
}
void _exit (unsigned long i)
{
    exit(i);
}
/* Standard functions */

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

string str (short value)
{
    return to_string (value);
}


string str (int value)
{
    return to_string (value);
}

string str (long value)
{
    return to_string (value);
}

string str (bool value)
{
    if (value){
        return "True";
    }
    else
    {
        return "False";
    }
}

string str (unsigned short value)
{
    return to_string (value);
}

string str (unsigned int value)
{
    return to_string (value);
}

string str (unsigned long value)
{
    return to_string (value);
}

string str (float value)
{
    return to_string (value);
}

string str (double value)
{
    return to_string (value);
}

string type (int value)
{
    return "<class 'int'>";
}

string type (unsigned int value)
{
    return "<class 'int'>";
}

string type (short value)
{
    return "<class 'int'>";
}

string type (unsigned short value)
{
    return "<class 'int'>";
}

string type (long value)
{
    return "<class 'int'>";
}

string type (unsigned long value)
{
    return "<class 'int'>";
}

string type (double value)
{
    return "<class 'float'>";
}

string type (float value)
{
    return "<class 'float'>";
}

string type (string value)
{
    return "<class 'str'>";
}

string type (bool value)
{
    return "<class 'bool'>";
}

class os
{
    public:
        static void mkdir (string value)
        {
            string command = "mkdir "+value;
            system (command.c_str());
        }
        static void remove (string value)
        {
            string command = "rm "+value;
            system (command.c_str());
        }
        static void rmdir (string value)
        {
            string command = "rmdir "+value;
            system (command.c_str());
        }
        static void removedirs (string value)
        {
            string command = "rm -r "+value;
            system (command.c_str());
        }
        static string getcwd ()
        {
            return _getcwd();
        }
        static void chdir (string value)
        {
            string command = "cd "+value;
            system (command.c_str());
        }
        static void system (string command)
        {
            _system(command);
        }
};

class sys
{
    public:
        string version = "3.9.9";
        static void exit ()
        {
            _exit();
        }
        static void exit (short i)
        {
            _exit(i);
        }
        static void exit (int i)
        {
            _exit(i);
        }
        static void exit (long i)
        {
            _exit(i);
        }
        static void exit (unsigned short i)
        {
            _exit(i);
        }
        static void exit (unsigned int i)
        {
            _exit(i);
        }
        static void exit (unsigned long i)
        {
            _exit(i);
        }
};

os os;
sys sys;
#endif