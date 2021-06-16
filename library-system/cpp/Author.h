#include <string>
#include <iostream>
using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H

class Author
{
private:
    string name;
    string description;

public:
    Author(string name,
           string description);

    string getName();
};

#endif
