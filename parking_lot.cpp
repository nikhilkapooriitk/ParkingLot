#include "parking_lot.h"
#include <algorithm>

ParkingLot::ParkingLot(int32_t num_spots) : num_spots_(num_spots) {
    spots_ = new ParkingSpot[num_spots];

    // Initialize the distance from the gate for each spot
    for (int32_t i = 0; i < num_spots; ++i) {
        spots_[i].distance_from_gate = i;
    }
}

ParkingLot::~ParkingLot() {
    delete[] spots_;
}

void ParkingLot::ParkVehicle() {
    // Find the nearest unoccupied parking spot
    auto iter = std::find_if(spots_, spots_ + num_spots_, [](const ParkingSpot& spot) {
        return !spot.is_occupied;
    });

    // Mark the spot as occupied
    if (iter != spots_ + num_spots_) {
        iter->is_occupied = true;
    } else {
        std::cout << "Sorry, all spots are currently occupied." << std::endl;
    }
}

void ParkingLot::RemoveVehicle() {
    // Find the nearest occupied parking spot
    auto iter = std::find_if(spots_, spots_ + num_spots_, [](const ParkingSpot& spot) {
        return spot.is_occupied;
    });

    // Mark the spot as unoccupied
    if (iter != spots_ + num_spots_) {
        iter->is_occupied = false;
    } else {
        std::cout << "Sorry, there are no occupied spots to remove a vehicle from." << std::endl;
    }
}
