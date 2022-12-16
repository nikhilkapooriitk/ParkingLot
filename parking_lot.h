#ifndef PARKING_LOT_H
#define PARKING_LOT_H

#include <cstdint>

struct ParkingSpot {
    int32_t distance_from_gate;
    bool is_occupied;
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
