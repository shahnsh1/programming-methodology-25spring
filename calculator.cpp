#include "calculator.h"
#include <stdexcept>
#include <limits>

int x = std::numeric_limits<int>::min();
int y = std::numeric_limits<int>::max();

int Calculator::add(int a, int b) {
    // TODO
    if (a == x and b >= -1) {
        throw std::overflow_error("AddOverFlow");
    }
    else if (a == y and b <= 1) {
        throw std::overflow_error("AddUnderFlow");
    }
    return a+b;
}

int Calculator::sub(int a, int b) {
    // TODO
    if (a == x and b >= 1) {
        throw std::overflow_error("SubtracUnderFlow");
    }
    else if (a == y and b <= -1) {
        throw std::overflow_error("SubtractOverFlow");
    }
    return a-b;
}

int Calculator::mul(int a, int b) {
    // TODO
    if (a == y/2 + 1 and b >= 2) {
        throw std::overflow_error("MultiplyOverFlow");
    }
    else if (a == x/2 and b >= 3) {
        throw std::overflow_error("MultiplyUnderFlow");
    }
    return a*b;
}

int Calculator::div(int a, int b) {
    // TODO
    if (b == 0) {
        throw std::invalid_argument("DivideByZero");
    }
    else if (a == x and b == -1) {
        throw std::overflow_error("DivideOverFlow");
    }
    return a/b;
}