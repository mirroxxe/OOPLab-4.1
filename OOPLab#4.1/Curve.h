#pragma once
#include <iostream>
#include <cmath>

class Curve {
public:
    virtual double compute(double x) const = 0;

    virtual ~Curve() {}
};