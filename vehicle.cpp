#include <string>

class Vehicle {
  private:
    std::string make;
    std::string model;
    std::string color;
    std::string licensePlate;

  public:
    Vehicle(std::string make, std::string model, std::string color, std::string licensePlate)
        : make(make), model(model), color(color), licensePlate(licensePlate) {}

    std::string getMake() const { return make; }
    std::string getModel() const { return model; }
    std::string getColor() const { return color; }
    std::string getLicensePlate() const { return licensePlate; }
};
