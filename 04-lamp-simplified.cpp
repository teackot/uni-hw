#include <iostream>

int main()
{
    bool daytime = false, curtains_open = false, lamp_on = false;

    std::cout << "Введите 1 если на улице день: ";
    std::cin >> daytime;

    std::cout << "Введите 1 если шторы открыты: ";
    std::cin >> curtains_open;

    std::cout << "Введите 1 если лампа включена: ";
    std::cin >> lamp_on;

    std::cout << "В комнате ";
    if (lamp_on || (daytime && curtains_open)) {
        std::cout << "светло";
    } else {
        std::cout << "темно";
    }
    std::cout << std::endl;

    return 0;
}
