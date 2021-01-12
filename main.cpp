/*
Морозов Д.О.
М8О-207Б-19
Вариант 20:
    Создать класс Bottle для работы с емкостями. Класс должен состоять из двух вещественных чисел: 
    a- объем емкости в литрах и b – процент наполнения емкости (0 – пустая, 1 – полная). 
    Реализовать операции сложения и вычитания, а также сравнения объектов класса бутылка. 
    При сложении должен складываться фактический объем заполнения бутылок.
*/

#include <iostream>

struct Bottle {
    public:
    double a; //ёмкость бутлыки
    double b; //процент наполнения
};

int main() {
    Bottle f1;
    Bottle f2;
    int a;
    std::cout << "Enter the total capacity of the first bottle" << "\n";
    std::cin >> f1.a;
    std::cout << "Enter the percentage of filling of the first bottle" << "\n";
    std::cin >> f1.b;
    std::cout << "Enter the total capacity of the second bottle" << "\n";
    std::cin >> f2.a;
    std::cout << "Enter the percentage of filling of the second bottle" <<"\n";
    std::cin >> f2.b;
    if ((f1.a >= 0) && (f2.a >= 0) && (f1.b >= 0) && (f1.b <= 1) && (f2.b >= 0) && (f2.b <= 1)) {
    while (a != 4) {
        std::cout << "To fold the bottles press 1" << "\n" << "To subtract bottles press 2" << "\n" << "To compare bottles press 3" << "\n" << "Exit in programm press 4" << "\n";
        std::cout << "Enter the command" << "\n";
        std::cin >> a;
        switch (a) {
            case 1: {
                try {
                    std::cout << f1.a + f2.a << " " << f1.b + f2.b << "\n";
                }
                catch (const char* exc) {
                    std::cerr << exc << std::endl;
                }
                break;
            }
            case 2: {
                try {
                    std::cout << f1.a - f2.a << " " << f1.b - f2.b << "\n";
                }
                catch (const char* exc) {
                    std::cerr << exc << std::endl;
                }
                break;
            }
            case 3: {
                if ((f1.a == f2.a) && (f1.b == f2.b)) {
                    std::cout << "Bottles are equal" << "\n";
                }
                else {
                    std::cout << "Bottles are NOT equal" << "\n";
                }
                break;
            }
            case 4: {
                break;
            }
            default:
                std::cout << "Invalid command" << "\n";
                break;
        }
    }
    }
    else {
        std::cout << "ERROR" << "\n";
        return -1;
    }
    return 0;
}
