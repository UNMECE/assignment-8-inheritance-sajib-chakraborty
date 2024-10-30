#ifndef ELECTRIC_FIELD_H
#define ELECTRIC_FIELD_H

#include "Field.h"

class Electric_Field : public Field {
private:
    double calculatedField;

public:
    Electric_Field();
    Electric_Field(double x, double y, double z);
    void calculateField(double r, double Q);
    double getCalculatedField() const;
    Electric_Field operator+(const Electric_Field& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Electric_Field& field);
};

#endif // ELECTRIC_FIELD_H

