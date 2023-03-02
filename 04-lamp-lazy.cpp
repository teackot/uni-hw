#include <iostream>

int main()
{
    bool daytime = false, curtains_open = false, lamp_on = false;

    std::cout << "Введите 1 если на улице день (0 в противном случае): ";
    if (!(std::cin >> daytime)) {
        std::cout << "введено неверное значение" << std::endl;
        return -1;
    }

    std::cout << "Введите 1 если шторы открыты (0 в противном случае): ";
    if (!(std::cin >> curtains_open)) {
        std::cout << "введено неверное значение" << std::endl;
        return -1;
    }

    std::cout << "Введите 1 если лампа включена (0 в противном случае): ";
    if (!(std::cin >> lamp_on)) {
        std::cout << "введено неверное значение" << std::endl;
        return -1;
    }

    std::cout << "В комнате ";
    if (lamp_on || (daytime && curtains_open)) {
        std::cout << "светло";
    } else {
        std::cout << "темно";
    }
    std::cout << std::endl;

    return 0;
}
