#include <iostream>
#include "Transport.h"
using namespace std;

Transport::Transport() {
    body = "корпус транспортного засобу";
    wheel_count = 4;
    wheels = new std::string[wheel_count]{
        "переднє ліве", "переднє праве", "заднє ліве", "заднє праве"
    };
    build();
}

Transport::~Transport() {
    destroy();
    delete[] wheels;
}

void Transport::build() {
    std::cout << "\nСтворено:\n" << body << "\nКолеса:\n";
    for (int i = 0; i < wheel_count; ++i)
        std::cout << wheels[i] << "\n";
}

void Transport::destroy() {
    std::cout << "\nЗнищено:\n" << body << "\nКолеса:\n";
    for (int i = 0; i < wheel_count; ++i)
        std::cout << wheels[i] << "\n";
}

std::string Transport::getBody() const { return body; }
int Transport::getWheelCount() const { return wheel_count; }

LandVehicle::LandVehicle() {
    drivetrain = "наземний привід";
    std::cout << "\nдобавлено: " << drivetrain << "\n";
}

LandVehicle::~LandVehicle() {
    std::cout << "\nвидалено: " << drivetrain << "\n";
}

std::string LandVehicle::getDrivetrain() const { return drivetrain; }

PaintedVehicle::PaintedVehicle() {
    color = "червоний";
    std::cout << "\nдобавлено: колір " << color << "\n";
}

PaintedVehicle::~PaintedVehicle() {
    std::cout << "\nвидалено: колір " << color << "\n";
}

std::string PaintedVehicle::getColor() const { return color; }

Car::Car() {
    horsepower = 150;
    max_speed = 200;
    fuel_type = "бензин";

    std::cout << "\nдобавлено: двигун, салон, кермо\n";
    std::cout << "добавлено: " << horsepower << " к.с., макс. швидкість " << max_speed << " км/год, пальне: " << fuel_type << "\n";
    std::cout << "У нас є автомобіль\n\n";
}

Car::~Car() {
    std::cout << "\nЗруйновано: автомобіль\n";
}

Motorcycle::Motorcycle() { cout << "Motocycle constructor\n"; }
Motorcycle::~Motorcycle() { cout << "Motocycle destructor\n"; }
Sportbike::Sportbike() { cout << "Sportbike constructor\n"; }
Sportbike::~Sportbike() { cout << "Sportbike destructor\n"; }
Electricbike::Electricbike() { cout << "Electricbike constructor\n"; }
Electricbike::~Electricbike() { cout << "Electricbike destructor\n"; }
Classicbike::Classicbike() { cout << "ClassicBike constructor\n"; }
Classicbike::~Classicbike() { cout << "ClassicBike destructor\n"; }
Bicycle::Bicycle() { cout << "Bicycle constructor\n"; }
Bicycle::~Bicycle() { cout << "Bicycle destructor\n"; }