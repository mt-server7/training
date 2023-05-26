#include <iostream>
void menu();
void run1(); void run2(); void run3(); void run4(); void run5(); void run6(); void run7(); void run8(); void run9(); void run10();
void run11(); void run12(); void run13(); void run14(); void run15(); void run16(); void run17(); void run18(); void run19(); void run20();


void menu()
{
    std::cout<<"Задачи для самостоятельного решения из главы 1"<<std::endl;
    std::cout<<"1. Вывод натуральных чисел"<<std::endl;
    std::cout<<"2. Вывод первых пяти нечетных чисел"<<std::endl;
    std::cout<<"3. Вывод чисел, которые при делении на 4 дают остаток 3"<<std::endl;
    std::cout<<"4. Вывод чисел Фибоначчи"<<std::endl;
    std::cout<<"5. Вывод биноминальных коэффициентов"<<std::endl;
    std::cout<<"6. Перевод километров в милли"<<std::endl;
    std::cout<<"7. Перевод километров и метров в милли и футы"<<std::endl;
    std::cout<<"8. Перевод саженей в метры"<<std::endl;
    std::cout<<"9. Перевод сажаней и аршинов в метры и сантиметры"<<std::endl;
    std::cout<<"10. Перевод скорости из км/ч в м/с"<<std::endl;
    std::cout<<"11. Перевод скорости из м/с в км/ч"<<std::endl;
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
        int number;
        std::cin>>number;
        switch(number)
        {
            case 1:
                run1();
                break;
            case 2:
                run2();
                break;
            case 3:
                run3();
                break;
            case 4:
                run4();
                break;
            case 5:
                run5();
                break;
            case 6:
                run6();
                break;
            case 7:
                run7();
                break;
            case 8:
                run8();
                break;
            case 9:
                run9();
                break;
//            case 10:
//                run10();
//                break;
//            case 11:
//                run11();
//                break;
//            case 12:
//                run12();
//                break;
//            case 13:
//                run13();
//                break;
//            case 14:
//                run14();
//                break;
//            case 15:
//                run15();
//                break;
//            case 16:
//                run16();
//                break;
//            case 17:
//                run17();
//                break;
//            case 18:
//                run18();
//                break;
//            case 19:
//                run19();
//                break;
//            case 20:
//                run20();
//                break;
            case 21: exit(0);
            default: std::cout<<"Неверный номер задачи!"<<std::endl;

        }
    }
}

void run1()
{
    int a = 0;
    Task_1 run(a);
    run.Set_num(a);

}
void run2()
{
    int a = 0;
    Task_2 run(a);
    run.Set_num(a);

}
void run3()
{
    int a = 0;
    Task_3 run(a);
    run.Set_num(a);
}
void run4()
{
    int a = 0;
    Task_4 run(a);
    run.Set_num(a);
}
void run5()
{
    int a = 0;
    Task_5 run(a);
    run.Set_num(a);
}
void run6()
{
    int a = 0;
    Task_6 run(a);
    run.Set_num(a);
}
void run7()
{
    int a = 0;
    Task_7 run(a, a);
    run.Set_num(a, a);
}
void run8()
{
    int a = 0;
    Task_8 run(a);
    run.Set_num(a);
}
void run9()
{
    int a = 0;
    Task_9 run(a, a);
    run.Set_num(a, a);
}
//void run10()
//{
//    int a = 0;
//    Task_10 run(a);
//    run.Set_num(a);
//}
//void run11()
//{
//    int a = 0;
//    Task_11 run(a);
//    run.Set_num(a);
//}
//void run12()
//{
//    int a = 0;
//    Task_12 run(a);
//    run.Set_num(a);
//}
//void run13()
//{
//    int a = 0;
//    Task_13 run(a);
//    run.Set_num(a);
//}
//void run14()
//{
//    int a = 0;
//    Task_14 run(a);
//    run.Set_num(a);
//}
//void run15()
//{
//    int a = 0;
//    Task_15 run(a);
//    run.Set_num(a);
//}
//void run16()
//{
//    int a = 0;
//    Task_16 run(a);
//    run.Set_num(a);
//}
//void run17()
//{
//    int a = 0;
//    Task_17 run(a);
//    run.Set_num(a);
//}
//void run18()
//{
//    int a = 0;
//    Task_18 run(a);
//    run.Set_num(a);
//}
//void run19()
//{
//    int a = 0;
//    Task_19 run(a);
//    run.Set_num(a);
//}
//void run20()
//{
//    int a = 0;
//    Task_20 run(a);
//    run.Set_num(a);
//}
