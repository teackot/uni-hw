#include <iostream>

int main()
{
    int a, b;

    std::cout << "Введите число a: ";
    std::cin >> a;

    std::cout << "Введите число b: ";
    std::cin >> b;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    if (b != 0) {
        std::cout << "a / b = " << (double) a / b << std::endl;
    } else {
        std::cout << "a / b - невозможно (b = 0)" << std::endl;
    }

    return 0;
}
