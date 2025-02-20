#ifndef COMPLEX_NUMBER_HPP_
#define COMPLEX_NUMBER_HPP_

#include <iostream>

struct ComplexNumber {
    double real;
    double imag;

    ComplexNumber() : real(0), imag(0) {}
    ComplexNumber(double r, double i) : real(r), imag(i) {}

    ComplexNumber add(const ComplexNumber &other) const {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    ComplexNumber subtract(const ComplexNumber &other) const {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    ComplexNumber multiply(const ComplexNumber &other) const {
        double r = real * other.real - imag * other.imag;
        double i = real * other.imag + imag * other.real;
        return ComplexNumber(r, i);
    }

    void print() const {
        std::cout << real;
        if (imag >= 0)
            std::cout << " + " << imag << "i";
        else
            std::cout << " - " << -imag << "i";
        std::cout << std::endl;
    }
};

#endif COMPLEX_NUMBER_HPP