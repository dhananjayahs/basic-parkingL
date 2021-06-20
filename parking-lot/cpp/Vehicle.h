#include "types.h"
#include "ParkingTicket.h"

class Vehicle
{
private:
    string licenseNumber;
    VehicleType type;
    ParkingTicket ticket;

public:
    Vehicle(VehicleType type);

    void assignTicket(ParkingTicket ticket);
};

class Car : public Vehicle
{
public:
    Car();
};

class Van : public Vehicle
{
public:
    Van();
};

class Truck : public Vehicle
{
public:
    Truck();
};

class Electric : public Vehicle
{
public:
    Electric();
};

class Motorbike : public Vehicle
{
public:
    Motorbike();
};
