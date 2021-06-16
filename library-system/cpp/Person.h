#include <string>
#include <iostream>
#include "Address.h"

using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person
{
private:
    string name;
    Address address;
    string email;
    string phone;

public:
    Person(string name,
           Address address,
           string email,
           string phone);
};

#endif
