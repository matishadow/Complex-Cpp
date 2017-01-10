#ifndef COMPLEX_CPP_COMPLEX_H
#define COMPLEX_CPP_COMPLEX_H

#include <type_traits>
#include <cmath>

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

    T getAbs() const {
        return Abs;
    }

private:
    T Imaginary;
    T Real;
    T Abs = sqrt(real * real + imaginary * imaginary);
};


#endif //COMPLEX_CPP_COMPLEX_H
