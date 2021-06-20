#include "types.h"
#include "ParkingSpot.h"

class ParkingDisplayBoard
{
private:
    string id;

    HandicappedSpot handicappedFreeSpot;
    CompactSpot compactFreeSpot;
    LargeSpot largeFreeSpot;
    MotorbikeSpot motorbikeFreeSpot;
    ElectricSpot electricFreeSpot;

public:
    void showEmptySpotNumber();
};
