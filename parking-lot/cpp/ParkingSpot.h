#include "types.h"

class ParkingSpot
{
private:
    string name;
    bool isFree;
    Vehicle vehicle;
    ParkingSpotType type;

public:
    bool isFree();

    ParkingSpot(ParkingSpotType type);

    bool assignVehicle(Vehicle vehicle);

    bool removeVehicle();
};

class HandicappedSpot : public ParkingSpot
{
public:
    HandicappedSpot();
};

class CompactSpot : public ParkingSpot
{
public:
    CompactSpot();
};

class LargeSpot : public ParkingSpot
{
public:
    LargeSpot();
};

class MotorbikeSpot : public ParkingSpot
{
public:
    MotorbikeSpot();
};

class ElectricSpot : public ParkingSpot
{
public:
    ElectricSpot();
};
