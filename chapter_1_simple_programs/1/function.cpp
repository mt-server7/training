#include <iostream>
void menu();
void running();

void menu()
{
    std::cout<<"Задачи для самостоятельного решения из главы 1"<<std::endl;
    std::cout<<"1. Вывод натуральных чисел"<<std::endl;
    std::cout<<"2. Вывод первых пяти нечетных чисел"<<std::endl;
    std::cout<<"3. Вывод чисел, которые при делении на 4 дают остаток 3"<<std::endl;
    std::cout<<"4. Вывод чисел Фибоначчи"<<std::endl;
    std::cout<<"5. Вывод биноминальных коэффициентов"<<std::endl;
    std::cout<<"6. Перевод киллометров в милли"<<std::endl;
    std::cout<<"7. Перевод киллометров и метров в милли и футы"<<std::endl;
    std::cout<<"8. Перевод саженей в метры"<<std::endl;
    std::cout<<"9. Перевод сажаней и аршинов в метры и сантиметры"<<std::endl;
    std::cout<<"10. Перевод скорости из км/ч в м/с"<<std::endl;
    std::cout<<"11. Обратная 10 задача"<<std::endl;
    std::cout<<"12. Вычесление суммы натуральных чисел"<<std::endl;
    std::cout<<"13. Вычисление суммы нечетных натуральных чисел"<<std::endl;
    std::cout<<"14. Заполнение массива натуральными числами"<<std::endl;
    std::cout<<"15. Заполнение массива нечетными натуральными числами"<<std::endl;
    std::cout<<"16. Заполнение массива квадратами натуральных чисел"<<std::endl;
    std::cout<<"17. Заполнение массива степенями 2"<<std::endl;
    std::cout<<"18. Заполнение массива числами Фибоначчи"<<std::endl;
    std::cout<<"19. Заполнение массива: четные элементы - индекс, нечетные - квадрат индекса"<<std::endl;
    std::cout<<"20. Заполнение массива вводом с клавиатуры \n"<<std::endl;


    for(int i=0; i<21; i++)
    {
        std::cout<<"Введите номер задачи (для выхода введите 21): ";
        int num;
        std::cin>>num;
        switch(num)
        {
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21: exit(0);
            default: std::cout<<"Неверный номер задачи!"<<std::endl;

        }
    }
}

void running()
{
    std::cout<<2;
}
