#ifndef COMPLEX_CPP_COMPLEX_H
#define COMPLEX_CPP_COMPLEX_H

template<typename T>
class Complex {
public:
    Complex(T Real, T Imaginary) : Real(Real), Imaginary(Imaginary) {}

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
