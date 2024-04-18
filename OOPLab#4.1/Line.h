#pragma once
#include "Curve.h"
#include <cmath>

class Line : public Curve {
private:
    double a, b;
public:
    Line(double a, double b) : a(a), b(b) {}

    double compute(double x) const override {
        return (a * x) + b;
    }
};