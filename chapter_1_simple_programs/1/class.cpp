#include <iostream>

class Task_1
{
    private:
        int n;
        void Output()
        {
            std::cout<<"Введите верхнюю границу: ";
            std::cin>>n;
            for(int i=0; i<=n; i++)
            {
                std::cout<<i<<" ";
            }
            std::cout<<std::endl;
        }
    public:
        Task_1(int n1)
        {
            Set_num(n1);
            Output();
        }

        ~Task_1(){}

        void Set_num(int n1)
        {
            n = n1;
        }
};

class Task_2
{
    private:
        int n;
        void Output()
        {
            std::cout<<"Введите верхнюю границу: ";
            std::cin>>n;
            for(int i=0; i<n; i++)
            {
                if(i % 2 == 1)
                std::cout<<i<<" ";
            }
            std::cout<<std::endl;
        }
    public:
        Task_2(int n1)
        {
            Set_num(n1);
            Output();
        }

        ~Task_2(){}

        void Set_num(int n1)
        {
            n = n1;
        }
};

class Task_3
{
        private:
        int n;
        void Output()
        {
            std::cout<<"Введите верхнюю границу: ";
            std::cin>>n;
            for(int i=0; i<=n; i++)
            {
                if(i % 4 == 3)
                std::cout<<i<<" ";
            }
            std::cout<<std::endl;
        }
    public:
        Task_3(int n1)
        {
            Set_num(n1);
            Output();
        }

        ~Task_3(){}

        void Set_num(int n1)
        {
            n = n1;
        }
};

class Task_4
{
        private:
        int n; long int a = 0, b = 1;
        void Output()
        {
            std::cout<<"Введите количество элементов: ";
            std::cin>>n;
            for(int i=0; i<n; i++)
            {
               a = a + b;
               b = a - b;
               std::cout<<a<<" ";
            }
            std::cout<<std::endl;
        }
    public:
        Task_4(int n1)
        {
            Set_num(n1);
            Output();
        }

        ~Task_4(){}

        void Set_num(int n1)
        {
            n = n1;
        }
};

class Task_5
{
    private:
        int n;
        void Output()
        {
            std::cout<<"Введите количество элементов: ";
            std::cin>>n;
           long int* arr = new long int [n];
            arr[0] = 1;

            for(int i=0; i<n; i++)
            {
                arr[i+1] = arr[i] * (n-i) / (i+1);
                std::cout<<arr[i+1]<<" ";
            }
            delete [] arr;
            std::cout<<std::endl;
        }
    public:
        Task_5(int n1)
        {
            Set_num(n1);
            Output();
        }

        ~Task_5(){}

        void Set_num(int n1)
        {
            n = n1;
        }
};

class Task_6
{
    private:
        const double km_in_mil = 1.6093;
        double kilometer;
        double Output(double kilometer)
        {
            std::cout<<"Введите значение:";
            std::cin>>kilometer;
            std::cout<<kilometer / km_in_mil<<std::endl;
        }

    public:
        Task_6(double kilo)
        {
            Set_num(kilo);
            Output(kilo);
        }

        ~Task_6(){}

        void Set_num(double kilo)
        {
            kilometer = kilo;
        }
};

class Task_7
{
    private:
        const double km_in_mil = 1.6093;
        const double metr_in_ft = 3.2808;
        int kilometer, metr, dmil, dft;
        double Output(int kilometer, int metr)
        {
            std::cout<<"Введите значение километров и метров:";
            std::cin>>kilometer>>metr;
            double dist_km = (double)kilometer + (double)metr / 1000;
            dmil = (double) dist_km / km_in_mil;
            dft = (dist_km - dmil) + metr_in_ft * (double)metr;
            std::cout<<"Дистанция в милях и футах: "<< dmil<<" mill"<<" "<<dft<<" ft"<<std::endl;
        }

    public:
        Task_7(int kilo, int mt)
        {
            Set_num(kilo, mt);
            Output(kilo, mt);
        }

        ~Task_7(){}

        void Set_num(int kilo, int mt)
        {
            kilometer = kilo;
            metr = mt;
        }
};

class Task_8
{
    private:
        const double sh_in_mt = 2.16;
        double metr;
        double Output(double metr)
        {
            std::cout<<"Введите значение:";
            std::cin>>metr;
            std::cout<<metr * sh_in_mt<<std::endl;
        }

    public:
        Task_8(double mtr)
        {
            Set_num(mtr);
            Output(mtr);
        }

        ~Task_8(){}

        void Set_num(double mtr)
        {
            metr = mtr;
        }
};

class Task_9
{
    private:
        const double sh_in_mt = 2.16;
        const int ar_in_sh = 3;
        int metr, sm, ar, sh;
        double Output(int sh, int ar)
        {
            std::cout<<"Введите значение сажаней и аршин:";
            std::cin>>sh>>ar;
            double dist_sh = (double)sh + (double)ar * ar_in_sh;
            double dmetr = (double)sh * sh_in_mt;
            metr = (int)dmetr;
            sm = (int)(dmetr - metr) * 100;
            std::cout<<"Дистанция в метрах и сантиметра: "<< metr<<" м"<<" "<<sm<<"см"<<std::endl;
        }

    public:
        Task_9(int sh1, int ar1)
        {
            Set_num(sh1, ar1);
            Output(sh1, ar1);
        }

        ~Task_9(){}

        void Set_num(int sh1, int ar1)
        {
            sh = sh1;
            ar = ar1;
        }
};

class Task_10
{

};

class Task_11
{

};

class Task_12
{

};

class Task_13
{

};

class Task_14
{

};

class Task_15
{

};

class Task_16
{

};

class Task_17
{

};

class Task_18
{

};

class Task_19
{

};

class Task_20
{

};
