#include <iostream>

int main()
{
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    int remainder = year % 12;

    if (remainder < 0)
    {
        remainder += 12;
    }

    std::cout << "Sign of the year: ";

    switch (remainder)
    {
    case 0:
        std::cout << "Monkey (Обезьяна)" << std::endl;
        break;
    case 1:
        std::cout << "Rooster (Петух)" << std::endl;
        break;
    case 2:
        std::cout << "Dog (Собака)" << std::endl;
        break;
    case 3:
        std::cout << "Boar (Кабан)" << std::endl;
        break;
    case 4:
        std::cout << "Rat (Крыса)" << std::endl;
        break;
    case 5:
        std::cout << "Ox (Бык)" << std::endl;
        break;
    case 6:
        std::cout << "Tiger (Тигр)" << std::endl;
        break;
    case 7:
        std::cout << "Rabbit (Кролик)" << std::endl;
        break;
    case 8:
        std::cout << "Dragon (Дракон)" << std::endl;
        break;
    case 9:
        std::cout << "Snake (Змея)" << std::endl;
        break;
    case 10:
        std::cout << "Horse (Лошадь)" << std::endl;
        break;
    case 11:
        std::cout << "Sheep (Овца)" << std::endl;
        break;
    default:
        std::cout << "Unknown sign" << std::endl;
        break;
    }

    return 0;
}