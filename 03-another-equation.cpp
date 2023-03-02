#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cout << "Введите число a: ";
    std::cin >> a;

    std::cout << "Введите число b: ";
    std::cin >> b;

    std::cout << "Введите число c: ";
    std::cin >> c;

    if (a == 0) {
        // линейное

        if (b == 0) {
            if (c == 0) {
                std::cout << "x - любое";
            } else {
                std::cout << "нет решений";
            }
        } else {
            std::cout << "x = " << - c / b;
        }

        std::cout << std::endl;
    } else {
        // квадратное

        double discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            std::cout << "нет решений" << std::endl;
        } else if (discriminant == 0) {
            std::cout << "x = " << (- b + sqrt(discriminant)) / (2 * a) << std::endl;
        } else {
            std::cout << "x1 = " << (- b - sqrt(discriminant)) / (2 * a) << std::endl;
            std::cout << "x2 = " << (- b + sqrt(discriminant)) / (2 * a) << std::endl;
        }
    }

    return 0;
}
