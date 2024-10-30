#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

#include "Field.h"

class Magnetic_Field : public Field {
private:
    double calculatedField;

public:
    Magnetic_Field();
    Magnetic_Field(double x, double y, double z);
    void calculateField(double r, double I);
    double getCalculatedField() const;
    Magnetic_Field operator+(const Magnetic_Field& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Magnetic_Field& field);
};

#endif // MAGNETIC_FIELD_H

