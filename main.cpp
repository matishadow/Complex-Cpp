#include <iostream>
#include "Complex.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Complex<int, 1, 2, real_cast> c1;
    std::complex<double> stdc = c1;
    std::complex<double> a = c1 + stdc;
    std::complex<double> b = c1 * stdc;
    int real = static_cast<int>(c1);
    std::cout << stdc.imag() << std::endl;
    std::cout << real << std::endl;
    std::cout << a << std::endl;
    return 0;
}