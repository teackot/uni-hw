#include <iostream>
#include <cmath>

int main()
{
    double R, r, h, l;

    std::cout << "Введите R: ";
    std::cin >> R;

    std::cout << "Введите r: ";
    std::cin >> r;

    std::cout << "Введите высоту: ";
    std::cin >> h;

    double dr = (R - r);
    l = sqrt(dr * dr + h * h);

    std::cout << "V = " << M_PI * h * (R*R + R*r + r*r) / 3 << std::endl;
    std::cout << "S = " << M_PI * (R*R + (R + r) * l + r*r) << std::endl;

    return 0;
}
