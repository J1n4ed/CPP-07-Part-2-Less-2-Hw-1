// CPP-07, Part 2, Less 2, Hw 1.cpp

/*
  23.01.2023
  Тема 2, Занятие 2
  Работа 1, Месяцы
  CPP-07
  @j1n4ed
*/

#include <iostream>

enum class month
{
    jan = 1,    
    feb = 2,    
    mar = 3,    
    apr = 4,    
    may = 5,    
    jun = 6,    
    jul = 7,
    aug = 8,
    sep = 9,
    oct = 10,
    nov = 11,
    dec = 12    
};

int main()
{

    setlocale(LC_ALL, "Russian");

    int mon = 0;

    std::cout << "Номера месяцев, введите номер от 1 до 12. Для выхода введите 0.\n";        

    do // while (mon)
    {
        do
        {
            std::cout << "\nВведите номер месяца (0 = выход): ";
            std::cin >> mon;

            if (mon < 0 || mon > 12)
            {
                std::cout << "Ошибка ввода, повторите!\n";
            }

        } while (mon < 0 || mon > 12);

        if (mon)
        { 

            switch (static_cast<month>(mon))
            {
            case month::jan:

                std::cout << "Январь";

                break;
            case month::feb:

                std::cout << "Февраль";

                break;
            case month::mar:

                std::cout << "Март";

                break;
            case month::apr:

                std::cout << "Апрель";

                break;
            case month::may:

                std::cout << "Май";

                break;
            case month::jun:

                std::cout << "Июнь";

                break;
            case month::jul:

                std::cout << "Июль";

                break;
            case month::aug:

                std::cout << "Август";

                break;
            case month::sep:

                std::cout << "Сентябрь";

                break;
            case month::oct:

                std::cout << "Октябрь";

                break;
            case month::nov:

                std::cout << "Ноябрь";

                break;
            case month::dec:

                std::cout << "Декабрь";

                break;

            default:

                std::cout << "\nFailed to match (debug)";

                break;
            } // END OF switch (static_cast<month>(mon))

        } // END OF if (!mon)
            

    } while (mon);   

    std::cout << "До свиданья!\n\n" << std::endl;

    system("pause");
    return 0;
}