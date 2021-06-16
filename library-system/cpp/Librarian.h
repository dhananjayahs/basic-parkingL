#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

#ifndef LIBRARIAN_H
#define LIBRARIAN_H

class Librarian : public Account
{

public:
    Librarian();

    bool addBookItem();
    bool blockMember();
    bool unblockMember();
};

#endif
