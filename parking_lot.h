#ifndef PARKING_LOT_H
#define PARKING_LOT_H

#include <cstdint>
#include<vector>
#include <algorithm>

class Vehicle {
private:
    std::string make;
    std::string model;
    std::string color;
    std::string licensePlate;

public:
    std::string getMake();
    std::string getModel();
    std::string getColor();
    std::string getLicensePlate();
};


class ParkingSpace {
  private:
    int row;
    int column;
    bool occupied;
    std::string receiptNumber;
    int distanceFromLift;

  public:
    ParkingSpace(int row, int column, bool occupied, std::string receiptNumber);

    int getRow();
    int getColumn();
    bool isOccupied();
    std::string getReceiptNumber();
    void setOccupied(bool occupied);
    void setReceiptNumber(std::string receiptNumber);
};


class ParkingLot {
public:
    ParkingLot(int rows, int columns);
    ~ParkingLot();

    void ParkVehicle();
    void RemoveVehicle();

private:
    int rows;
    int columns;
    stack<make_pair(int, ParkingSpace)> distanceStack;
    vector<vector<ParkingSpace>> lot; 
};

#endif // PARKING_LOT_H
