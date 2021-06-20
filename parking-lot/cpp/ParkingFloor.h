#include "types.h"
#include "ParkingSpot.h"
#include "Vehicle.h"
#include "Panel.h"
#include <unordered_map>

class ParkingFloor
{
private:
    string name;
    unordered_map<string, HandicappedSpot> handicappedSpots;
    unordered_map<string, CompactSpot> compactSpots;
    unordered_map<string, LargeSpot> largeSpots;
    unordered_map<string, MotorbikeSpot> motorbikeSpots;
    unordered_map<string, ElectricSpot> electricSpots;
    unordered_map<string, CustomerInfoPortal> infoPortals;
    ParkingDisplayBoard displayBoard;

    void updateDisplayBoardForCompact(ParkingSpot spot);

public:
    ParkingFloor(string name);

    void addParkingSpot(ParkingSpot spot);

    void assignVehicleToSpot(Vehicle vehicle, ParkingSpot spot);

    void freeSpot(ParkingSpot spot);
};
