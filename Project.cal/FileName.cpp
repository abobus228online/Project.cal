#include <iostream>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, result;
    char n;
    std::cout << "Введите a:" << std::endl;
    std::cin >> a;
    std::cout << "Введите b:" << std::endl;
    std::cin >> b;
    std::cout << "Выберите одну из операций:" << std::endl;
    std::cout << "Сложение +" << std::endl;
    std::cout << "Вычитание -" << std::endl;
    std::cout << "Умножение *" << std::endl;
    std::cout << "Деление /" << std::endl;
    std::cin >> n;
    if (!strcmp(&n, "+"))
    {
        result = a + b;
        std::cout << "Сумма a+b:" << result << std::endl;
    }

    if (!strcmp(&n, "-"))
    {
        result = a - b;
        std::cout << "Разность a-b:" << result << std::endl;
    }
    if (!strcmp(&n, "*"))
    {
        result = a * b;
        std::cout << "Произведение a*b:" << result << std::endl;
    }
    if (!strcmp(&n, "/"))
    {
        result = a / b;
        std::cout << "Частное a/b:" << result << std::endl;
    }


    _getch();
    return 0;
}