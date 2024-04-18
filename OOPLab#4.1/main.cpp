#include "Curve.h"
#include "Line.h"
#include "Ellipse.h"
#include "Hyperbola.h"

int main() {
    const int size = 3;
    Curve* curves[size]{};

    // Створення об'єктів різних класів
    curves[0] = new Line(2, 3);
    curves[1] = new Ellipse(2, 1);
    curves[2] = new Hyperbola(2, 1);

    // Вивід справжнього типу поліморфних об'єктів
    for (int i = 0; i < size; ++i) {
        if (dynamic_cast<Line*>(curves[i]) != nullptr) {
            std::cout << "Object " << i + 1 << " is a Line." << std::endl;
        }
        else if (dynamic_cast<Ellipse*>(curves[i]) != nullptr) {
            std::cout << "Object " << i + 1 << " is an Ellipse." << std::endl;
        }
        else if (dynamic_cast<Hyperbola*>(curves[i]) != nullptr) {
            std::cout << "Object " << i + 1 << " is a Hyperbola." << std::endl;
        }
    }

    // Вивід значень функцій для деяких значень x
    std::cout << "Values of curves at x = 0.5:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Curve " << i + 1 << ": " << curves[i]->compute(0.5) << std::endl;
    }

    // Звільнення пам'яті
    for (int i = 0; i < size; ++i) {
        delete curves[i];
    }

    return 0;
}
