#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

#ifndef LIBRARYCARD_H
#define LIBRARYCARD_H

class LibraryCard
{
private:
    string cardNumber;
    string barcode;
    string issuedAt;
    bool active;

public:
    LibraryCard();

    bool isActive();
};

#endif
