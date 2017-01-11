#ifndef COMPLEX_CPP_SQUARE_H
#define COMPLEX_CPP_SQUARE_H


#include <type_traits>

template <typename T, T i, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
struct Square {
    static const T value = i*i;
};


#endif //COMPLEX_CPP_SQUARE_H
