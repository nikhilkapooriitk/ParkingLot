#include "parking_lot.h"

ParkingSpace::ParkingSpace(){
        row = 0; column = 0; occupied = true; receiptNumber = ""; distanceFromLift = 0;
    }

ParkingSpace::ParkingSpace(int row, int column, bool occupied, std::string receiptNumber, int distanceFromLift)
        : row(row), column(column), occupied(occupied), receiptNumber(receiptNumber), distanceFromLift(distanceFromLift){}

ParkingSpace::int getRow() const { return row; }

ParkingSpace::int getColumn() const { return column; }

ParkingSpace::bool isOccupied() const { return occupied; }

ParkingSpace::std::string getReceiptNumber() const { return receiptNumber; }

ParkingSpace::void setOccupied(bool occupied) { this->occupied = occupied; }

ParkingSpace::void setReceiptNumber(std::string receiptNumber) { this->receiptNumber = receiptNumber; }


