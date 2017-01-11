#ifndef COMPLEX_CPP_COMPLEX_H
#define COMPLEX_CPP_COMPLEX_H

#include <type_traits>
#include <cmath>
#include "Square.h"

template<typename T,
        T real,
        T imaginary,
        typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
class Complex {
public:
    Complex() : Real(real), Imaginary(imaginary) {}

    T getImaginary() const {
        return Imaginary;
    }

    T getReal() const {
        return Real;
    }

    double getAbs() const {
        return Abs;
    }


    constexpr double calculateAbs(){
        return sqrt(Square<T, real>::value + Square<T, imaginary>::value);
    }

private:
    T Imaginary;
    T Real;
    double Abs = calculateAbs();
};


#endif //COMPLEX_CPP_COMPLEX_H
