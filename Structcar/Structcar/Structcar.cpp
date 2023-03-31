// Structcar.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Car {
public:

    void set_year(int year)
    {
        this->year = year;
    }
    int get_year()
    {
        return year;
    }
    void set_make(char* make)
    {
        this->make = (char*) new char[2];
        this->make = make;
    }
    char* get_make()
    {
        return make;
    }
    void set_model(char* model)
    {
        this->model = model;
    }
    char* get_model()
    {
        return model;
    }
    void set_color(char* color)
    {
        this->color = color;
    }
    char* get_color()
    {
        return color;
    }
   

private:
    char* make;
    char* model;
    int year;
    char* color;

};

int main()
{
    Car bmw;
    char* str;
    str = (char*)new char[6];
    std::cin >> str;
    bmw.set_make(str);
    
    std::cout << bmw.get_make();
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
