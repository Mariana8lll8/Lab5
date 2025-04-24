#pragma once
#include <iostream>

class Transport {
    std::string body;
    std::string *wheels;
    int wheel_count;

    void build();
    void destroy();

public:
    Transport();
    ~Transport();

    std::string getBody() const;
    int getWheelCount() const;
};


class LandVehicle : virtual public Transport {
    std::string drivetrain;

public:
    LandVehicle();
    ~LandVehicle();
    std::string getDrivetrain() const;
};

class PaintedVehicle : virtual public Transport {
    std::string color;

public:
    PaintedVehicle();
    ~PaintedVehicle();
    std::string getColor() const;
};

class Car : public LandVehicle, public PaintedVehicle {
    int horsepower;
    int max_speed;
    std::string fuel_type;

public:
    Car();
    ~Car();
};

class Motorcycle {
public:
    Motorcycle();
    ~Motorcycle();
};

class Sportbike : virtual public Motorcycle {
public:
    Sportbike();
    ~Sportbike();
};

class Electricbike : virtual public Motorcycle {
public:
    Electricbike();
    ~Electricbike();
};

class Classicbike : virtual public Motorcycle {
public:
    Classicbike();
    ~Classicbike();
};

class Bicycle : public Sportbike, public Electricbike, public Classicbike {
public:
    Bicycle();
    ~Bicycle();
};

