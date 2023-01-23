// CPP-07, Part 2, Less 2, Hw 1.cpp

/*
  23.01.2023
  ���� 2, ������� 2
  ������ 1, ������
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

    std::cout << "������ �������, ������� ����� �� 1 �� 12. ��� ������ ������� 0.\n";        

    do // while (mon)
    {
        do
        {
            std::cout << "\n������� ����� ������ (0 = �����): ";
            std::cin >> mon;

            if (mon < 0 || mon > 12)
            {
                std::cout << "������ �����, ���������!\n";
            }

        } while (mon < 0 || mon > 12);

        if (mon)
        { 

            switch (static_cast<month>(mon))
            {
            case month::jan:

                std::cout << "������";

                break;
            case month::feb:

                std::cout << "�������";

                break;
            case month::mar:

                std::cout << "����";

                break;
            case month::apr:

                std::cout << "������";

                break;
            case month::may:

                std::cout << "���";

                break;
            case month::jun:

                std::cout << "����";

                break;
            case month::jul:

                std::cout << "����";

                break;
            case month::aug:

                std::cout << "������";

                break;
            case month::sep:

                std::cout << "��������";

                break;
            case month::oct:

                std::cout << "�������";

                break;
            case month::nov:

                std::cout << "������";

                break;
            case month::dec:

                std::cout << "�������";

                break;

            default:

                std::cout << "\nFailed to match (debug)";

                break;
            } // END OF switch (static_cast<month>(mon))

        } // END OF if (!mon)
            

    } while (mon);   

    std::cout << "�� ��������!\n\n" << std::endl;

    system("pause");
    return 0;
}