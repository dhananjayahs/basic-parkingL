#include "types.h"
#include "ParkingFloor.h"
#include "Panel.h"
#include "ParkingDisplayBoard.h"

class Account
{
private:
    string userName;
    string password;
    AccountStatus status;
    Person person;

    bool resetPassword();
};

class Admin : public Account
{
    bool addParkingFloor(ParkingFloor floor);
    bool addParkingSpot(string floorName, ParkingSpot spot);
    bool addParkingDisplayBoard(string floorName, ParkingDisplayBoard displayBoard);
    bool addCustomerInfoPanel(string floorName, CustomerInfoPanel infoPanel);

    bool addEntrancePanel(EntrancePanel entrancePanel);
    bool addExitPanel(ExitPanel exitPanel);
};

class ParkingAttendant : public Account
{
    bool processTicket(string TicketNumber);
};
