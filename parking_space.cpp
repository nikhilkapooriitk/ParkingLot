#include <string>

class ParkingSpace {
  private:
    int row;
    int column;
    bool occupied;
    std::string receiptNumber;

  public:
    ParkingSpace(int row, int column, bool occupied, std::string receiptNumber)
        : row(row), column(column), occupied(occupied), receiptNumber(receiptNumber) {}

    int getRow() const { return row; }
    int getColumn() const { return column; }
    bool isOccupied() const { return occupied; }
    std::string getReceiptNumber() const { return receiptNumber; }
    void setOccupied(bool occupied) { this->occupied = occupied; }
    void setReceiptNumber(std::string receiptNumber) { this->receiptNumber = receiptNumber; }
};
