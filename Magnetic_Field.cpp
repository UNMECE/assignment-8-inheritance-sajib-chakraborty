#include "Magnetic_Field.h"
#include <cmath>
#include <iostream>

Magnetic_Field::Magnetic_Field() : Field(), calculatedField(0) {}

Magnetic_Field::Magnetic_Field(double x, double y, double z) : Field(x, y, z), calculatedField(0) {}

void Magnetic_Field::calculateField(double r, double I) {
    const double mu_0 = 4 * M_PI * 1e-7;
    calculatedField = I / (2 * M_PI * r * mu_0);
}

double Magnetic_Field::getCalculatedField() const {
    return calculatedField;
}

Magnetic_Field Magnetic_Field::operator+(const Magnetic_Field& other) const {
    return Magnetic_Field(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
}

std::ostream& operator<<(std::ostream& os, const Magnetic_Field& field) {
    os << "Magnetic Field: (" << field.getValue()[0] << ", " << field.getValue()[1] << ", " << field.getValue()[2] << ")";
    return os;
}

