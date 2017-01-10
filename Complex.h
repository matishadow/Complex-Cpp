#ifndef COMPLEX_CPP_COMPLEX_H
#define COMPLEX_CPP_COMPLEX_H

#include <type_traits>

template<typename T,
        T real = 0,
        T imaginary = 0,
        typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
class Complex {
public:
    Complex(T Real, T Imaginary) : Real(Real), Imaginary(Imaginary) {}

    Complex() : Real(real), Imaginary(imaginary) {}

    T getImaginary() const {
        return Imaginary;
    }

    T getReal() const {
        return Real;
    }

private:
    T Imaginary;
    T Real;
};


#endif //COMPLEX_CPP_COMPLEX_H
