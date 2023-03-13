#include <iostream>
#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;

public:
    Car(int year, std::string carMake) {
        yearModel = year;
        make = carMake;
        speed = 0;
    }

    int getYearModel() {
        return yearModel;
    }

    std::string getMake() {
        return make;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        speed -= 5;
    }
};

int main() {
    Car myCar(2022, "Tesla");

    for (int i = 0; i < 5; i++) {
        myCar.accelerate();
        std::cout << "Current speed: " << myCar.getSpeed() << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        myCar.brake();
        std::cout << "Current speed: " << myCar.getSpeed() << std::endl;
    }

    return 0;
}