#ifndef COMPLEX_CPP_COMPLEX_H
#define COMPLEX_CPP_COMPLEX_H

#include <type_traits>
#include <cmath>
#include <complex>
#include "Square.h"
enum cast_t {
    real_cast, imaginary_cast
};

template<typename T,
        T real,
        T imaginary,
        cast_t cast_type,
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

    explicit operator T() const {
        switch (cast_type) {
            case real_cast:
                return real;
            case imaginary_cast:
                return imaginary;
        }
    }

    operator std::complex<double>() const {
        return std::complex<double>(real, imaginary);
    }

    std::complex<double> operator+(std::complex<double> a) {
        std::complex<double> b = *this;
        return a + b;
    }

    std::complex<double> operator*(std::complex<double> a) {
        std::complex<double> b = *this;
        return a * b;
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
