#include "types.h"
#include "Panel.h"
#include "ParkingFloor.h"
#include "ParkingTicket.h"
#include "ParkingRate.h"
#include <unordered_map>

class ParkingLot
{
private:
    string name;
    Location address;
    ParkingRate parkingRate;

    int compactSpotCount;
    int largeSpotCount;
    int motorbikeSpotCount;
    int electricSpotCount;
    const int maxCompactCount;
    const int maxLargeCount;
    const int maxMotorbikeCount;
    const int maxElectricCount;

    unordered_map<string, EntrancePanel> entrancePanels;
    unordered_map<string, ExitPanel> exitPanels;
    unordered_map<string, ParkingFloor> parkingFloors;

    unordered_map<string, ParkingTicket> activeTickets;

    static ParkingLot parkingLot;

    ParkingLot();

public:
    static ParkingLot getInstance();

    ParkingTicket getNewParkingTicket(Vehicle vehicle);

    bool isFull(VehicleType type);

    bool incrementSpotCount(VehicleType type);

    bool isFull();

    void addParkingFloor(ParkingFloor floor);

    void addEntrancePanel(EntrancePanel entrancePanel);

    void addExitPanel(ExitPanel exitPanel);
};
