#include <string>
#include <iostream>
using namespace std;

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
private:
    string streetAddress;
    string city;
    string state;
    string zipCode;
    string country;

public:
    Address(string streetAddress,
            string city,
            string state,
            string zipCode,
            string country);
};

#endif
