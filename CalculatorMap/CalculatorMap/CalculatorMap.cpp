// CalculatorMap.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>

void plus(int a, int b)
{
   std::cout << a + b << std::endl;
}

void minus(int a, int b)
{
    std::cout << a - b << std::endl;
}

void multiply(int a, int b)
{
    std::cout << a * b << std::endl;
}

void devide(int a, int b)
{
    std::cout << a / b << std::endl;
}

void (*tmp) (int, int);


int main()
{
    int x, y;
    char c;
    std::cout << "enter 1st number\n";
    std::cin >> x;
    std::cout << "enter operation\n";
    std::cin >> c;
    std::cout << "enter 2nd number\n";
    std::cin >> y;
    std::cout << "= ";
   
    std::map <char, void (*) (int, int)> operation;

    operation = { {'+', tmp}, {'-', tmp}, {'*', tmp},{'/', tmp}};
   
     if (c == '+')
    {
        tmp = &plus;
    }
    if (c == '-')
    {
        tmp = &minus;
    }
    if (c == '*')
    {
        tmp = &multiply;
    }
    if (c == '/')
    {
        tmp = &devide;
    }
    tmp(x, y);

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
