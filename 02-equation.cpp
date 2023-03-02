#include <iostream>

int main()
{
    double b, c;

    std::cout << "Введите число b: ";
    std::cin >> b;

    std::cout << "Введите число c: ";
    std::cin >> c;

    if (b == 0) {
        if (c == 0) {
            std::cout << "x - любое";
        } else {
            std::cout << "нет решений";
        }
    } else {
        std::cout << "x = " << -c / b;
    }

    std::cout << std::endl;

    return 0;
}
