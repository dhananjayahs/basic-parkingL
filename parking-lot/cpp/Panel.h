#include "types.h"

class EntrancePanel
{
private:
    string id;

public:
    bool printTicket();
};

class ExitPanel
{
private:
    string id;

public:
    bool scanTicket();
    bool processPayment();
};

class ParkingAttendantPanel
{
private:
    string id;

public:
    bool scanTicket();
    bool processPayment();
};

class CustomerInfoPanel
{
private:
    string id;

public:
    bool scanTicket();
    bool processPayment();
};
