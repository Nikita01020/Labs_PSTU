#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double c,f;
    cout << "Введите температуру (по Фаренгейту): ";
    cin >> f;
    c = 5.0/9.0*(f-32);
    cout << "Тепмература (по Цельсию): " << c;
    return 0;
}
