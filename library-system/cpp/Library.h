#include "./Address.h"
#include <string>
#include <iostream>

using namespace std;

#ifndef LIBRARY_H
#define LIBRARY_H

class Library
{
private:
    string name;
    Address address;

public:
    Library(string name, Address address);

    Address getAddress() { return address; }
};

#endif
