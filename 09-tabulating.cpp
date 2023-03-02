#include <iostream>

int main()
{
    for (double x = -4; x <= 4; x += 0.5) {
        if (x == 1) {
            std::cout << "x = 1; y - неопределено" << std::endl;
        } else {
            double y = (x * x - 2 * x + 2) / (x - 1);
            std::cout << "x = " << x << " | y = " << y << std::endl;
        }
    }

    return 0;
}
