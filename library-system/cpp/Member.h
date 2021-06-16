#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

#ifndef MEMBER_H
#define MEMBER_H

class Member : public Account
{
private:
    string dateOfMembership;
    int totalBooksCheckout;

public:
    Member();
};

#endif
