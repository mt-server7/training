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

};

class Task_7
{

};

class Task_8
{

};

class Task_9
{

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
