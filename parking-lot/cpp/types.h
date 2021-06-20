#include <iostream>
#include <string>

using namespace std;

enum ParkingSpotType
{
    Handicapped,
    Compact,
    Motorbike,
    Electric
};

enum VehicleType
{
    Car,
    Truck,
    Electric,
    Van,
    Motorbike
};

enum ParkingTicketStatus
{
    Active,
    Paid,
    Lost
};

enum AccountStatus
{
    Active,
    Closed,
    Cancelled,
    Blacklisted,
    None
};

class Location
{
    string streetAddress;
    string city;
    string zipcode;
    string country;
};

class Person
{
    string name;
    Location address;
    string email;
    string phone;
};
