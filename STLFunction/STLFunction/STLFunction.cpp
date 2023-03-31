// STLFunction.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <functional>

class Minus
{
    public:
        int operator()(int A, int B) {
            return A - B;
        }
        
};

template <class ComparisonFunctor>
int Function(int x, int y, ComparisonFunctor function)
{
    return function(x, y);
}


/*
int Function(int x, int y, std::function<int(int, int)> func_obj)
{
    return func_obj(x, y);
}

int Function2(int x, int y, std::multiplies<int> multiply)
{
    return  multiply(x, y);
}

int Function3(int x, int y, std::plus<int> plus)
{
    return plus(x, y);
}
*/
int main()
{
    std::function<int(int, int)> func_obj = Minus();
    std::multiplies<int> multiply;
    std::plus<int> plus;
    std::cout << Function(3, 3, func_obj) <<"\n";
    std::cout << Function(2, 3, multiply) << "\n";
    std::cout << Function(2, 3, plus) << "\n";
    

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
