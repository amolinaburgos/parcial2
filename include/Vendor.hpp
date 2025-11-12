#ifndef VENDOR_H
#define VENDOR_H

#include <iostream>
#include <string>

using namespace std;

class Vendor 
{
    public:
        Vendor(string code, string name);
        ~Vendor();
        string getCode();
        string getName();
    private:
        string code;
        string name;
};

#endif