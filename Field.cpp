#include "Field.h"
#include <cmath>
#include <iostream>

Field::Field() {
    value = new double[3]{0.0, 0.0, 0.0};
}

Field::Field(double x, double y, double z) {
    value = new double[3]{x, y, z};
}

Field::~Field() {
    delete[] value;
}

void Field::printMagnitude() const {
    double magnitude = std::sqrt(value[0] * value[0] + value[1] * value[1] + value[2] * value[2]);
    std::cout << "Magnitude: " << magnitude << std::endl;
}

