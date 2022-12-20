#ifndef PARKING_LOT_H
#define PARKING_LOT_H

#include <cstdint>

struct ParkingSpot {
    int32_t distance_from_gate;
    bool is_occupied;
};

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

  public:
    ParkingSpace(int row, int column, bool occupied, std::string receiptNumber)
        : row(row), column(column), occupied(occupied), receiptNumber(receiptNumber) {}

    int getRow();
    int getColumn();
    bool isOccupied();
    std::string getReceiptNumber();
    void setOccupied(bool occupied);
    void setReceiptNumber(std::string receiptNumber);
};


class ParkingLot {
public:
    ParkingLot(int32_t num_spots);
    ~ParkingLot();

    void ParkVehicle();
    void RemoveVehicle();

private:
    ParkingSpot* spots_;
    int32_t num_spots_;
};

#endif // PARKING_LOT_H
