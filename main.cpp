#include <iostream>
#include "parking_lot.h"

int main() {
    int32_t num_spots;
    std::cout << "Enter the number of parking spots in the lot: ";
    std::cin >> num_spots;

    ParkingLot lot(num_spots);

    while (true) {
        std::cout << "Enter a command (p to park, r to remove, q to quit): ";
        char command;
        std::cin >> command;

        if (command == 'p') {
            lot.ParkVehicle();
        } else if (command == 'r') {
            lot.RemoveVehicle();
        } else if (command == 'q') {
            break;
        } else {
            std::cout << "Invalid command" << std::endl;
        }
    }

    return 0;
}
