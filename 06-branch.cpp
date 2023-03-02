#include <iostream>
#include <cmath>

int main()
{
    double x, a;

    std::cout << "Введите x: ";
    std::cin >> x;

    std::cout << "Введите a: ";
    std::cin >> a;

    if (x == 0) {
        std::cout << "Не существует" << std::endl;
        return 0;
    }

    double xabs = std::abs(x);
    if (xabs < 1) {
        std::cout << "w = " << a * log(xabs) << std::endl;
    } else {
        double xsqare = x * x;
        if (xsqare > a) {
            std::cout << "Не существует" << std::endl;
            return 0;
        }

        std::cout << "w = " << sqrt(a - xsqare) << std::endl;
    }

    return 0;
}
