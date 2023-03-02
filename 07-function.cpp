#include <iostream>
#include <cmath>

int main()
{
    double x, y, b;

    std::cout << "Введите x: ";
    std::cin >> x;

    std::cout << "Введите y: ";
    std::cin >> y;

    std::cout << "Введите b: ";
    std::cin >> b;

    if (y >= b || x > b) {
        std::cout << "Не существует" << std::endl;
        return 0;
    }

    std::cout << "z = " << log(b - y) * sqrt(b - x);

    return 0;
}
