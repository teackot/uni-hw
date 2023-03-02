#include <iostream>

int main()
{
    int N;

    std::cout << "Введите число N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Число N должно быть натуральным!" << std::endl;
        return -1;
    }

    for (int num = N; num < N + 10; num++) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
