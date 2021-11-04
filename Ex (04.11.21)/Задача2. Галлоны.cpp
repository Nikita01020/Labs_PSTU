#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double f,g; // Галлоны
    cout << "Введите число галлонов" << "\n";
    cin >> f;
    g = f / 7.481; // Перевод в кубические футы
    cout << "Число кубических футов" << "\n";
    cout << g; // Вывод числа кубических футов
    return 0;
}
