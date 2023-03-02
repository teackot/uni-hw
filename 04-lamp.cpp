#include <iostream>

int main()
{
    bool daytime, curtains_open, lamp_on;
    std::string answer;

    std::cout << "На улице день? [да/нет]: ";
    std::cin >> answer;
    if (answer == "да") {
        daytime = true;
    } else if (answer == "нет") {
        daytime = false;
    } else {
        std::cout << "ответ введен неверно" << std::endl;
        return -1;
    }

    std::cout << "Открыты ли шторы? [да/нет]: ";
    std::cin >> answer;
    if (answer == "да") {
        curtains_open = true;
    } else if (answer == "нет") {
        curtains_open = false;
    } else {
        std::cout << "ответ введен неверно" << std::endl;
        return -1;
    }

    std::cout << "Включена ли лампа? [да/нет]: ";
    std::cin >> answer;
    if (answer == "да") {
        lamp_on = true;
    } else if (answer == "нет") {
        lamp_on = false;
    } else {
        std::cout << "ответ введен неверно" << std::endl;
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
