#include "Electric_Field.h"
#include <cmath>
#include <iostream>

Electric_Field::Electric_Field() : Field(), calculatedField(0) {}

Electric_Field::Electric_Field(double x, double y, double z) : Field(x, y, z), calculatedField(0) {}

void Electric_Field::calculateField(double r, double Q) {
    const double epsilon_0 = 8.854e-12;
    calculatedField = Q / (4 * M_PI * r * r * epsilon_0);
}

double Electric_Field::getCalculatedField() const {
    return calculatedField;
}

Electric_Field Electric_Field::operator+(const Electric_Field& other) const {
    return Electric_Field(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
}

std::ostream& operator<<(std::ostream& os, const Electric_Field& field) {
    os << "Electric Field: (" << field.getValue()[0] << ", " << field.getValue()[1] << ", " << field.getValue()[2] << ")";
    return os;
}

