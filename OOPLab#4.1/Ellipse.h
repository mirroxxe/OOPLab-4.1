#pragma once
#include "Curve.h"
#include <cmath>

class Ellipse : public Curve {
private:
    double a, b;
public:
    Ellipse(double a, double b) : a(a), b(b) {}

    double compute(double x) const override {
        return (x * x) / (a * a) + (y * y) / (b * b) = 1;
    }
};
