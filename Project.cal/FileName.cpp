#include <iostream>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, result;
    char n;
    std::cout << "������� a:" << std::endl;
    std::cin >> a;
    std::cout << "������� b:" << std::endl;
    std::cin >> b;
    std::cout << "�������� ���� �� ��������:" << std::endl;
    std::cout << "�������� +" << std::endl;
    std::cout << "��������� -" << std::endl;
    std::cout << "��������� *" << std::endl;
    std::cout << "������� /" << std::endl;
    std::cin >> n;
    if (!strcmp(&n, "+"))
    {
        result = a + b;
        std::cout << "����� a+b:" << result << std::endl;
    }

    if (!strcmp(&n, "-"))
    {
        result = a - b;
        std::cout << "�������� a-b:" << result << std::endl;
    }
    if (!strcmp(&n, "*"))
    {
        result = a * b;
        std::cout << "������������ a*b:" << result << std::endl;
    }
    if (!strcmp(&n, "/"))
    {
        result = a / b;
        std::cout << "������� a/b:" << result << std::endl;
    }


    _getch();
    return 0;
}