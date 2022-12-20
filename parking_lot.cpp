#include "parking_lot.h"


ParkingLot::ParkingLot(int rows, int columns): rows(rows), columns(columns) {
    vector<vector<ParkingSpace>> temp(rows, vector<ParkingSpace>(columns, ParkingSpace());

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            temp[i][j].row = i;
            temp[i][j].column = j;
            temp[i][j].occupied = false;
            temp[i][j].receiptNumber = to_string(i) + to_string(j);
        }
    }

    this->lot = temp;
}

ParkingLot::~ParkingLot() {
    delete[] spots_;
}

void ParkingLot::ParkVehicle(Vehicle vehicle) {
    ParkingSpace spot = distanceStack.top(); distanceStack.pop();

    cout<<"vehicle number"<<vechile.licensePlate<< " is parked at "<<vehicle.row<<" , "<<vehicle.column;
    
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
