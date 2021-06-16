#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H
enum AccountStatus
{
    Active,
    Closed,
    Completed,
    Canceled,
    None
};

class Account
{
private:
    string id;
    string password;
    AccountStatus status;
    Person person;

public:
    Account(string password,
            Person person);

    bool resetPassword();
};

#endif
