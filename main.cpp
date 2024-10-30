#include "Electric_Field.h"
#include "Magnetic_Field.h"
#include <iostream>

int main() {
    Electric_Field eField1(1e5, 10.9, 1.7e2);
    Electric_Field eField2(2e5, 20.9, 3.7e2);

    Magnetic_Field mField1(5e4, 15.5, 2.2e2);
    Magnetic_Field mField2(1e4, 30.5, 4.1e2);

    std::cout << eField1 << std::endl;
    std::cout << mField1 << std::endl;

    eField1.calculateField(0.5, 1e-9);
    std::cout << "Calculated Electric Field: " << eField1.getCalculatedField() << std::endl;

    mField1.calculateField(0.3, 5.0);
    std::cout << "Calculated Magnetic Field: " << mField1.getCalculatedField() << std::endl;

    Electric_Field eFieldSum = eField1 + eField2;
    Magnetic_Field mFieldSum = mField1 + mField2;

    std::cout << eFieldSum << std::endl;
    std::cout << mFieldSum << std::endl;

    return 0;
}

