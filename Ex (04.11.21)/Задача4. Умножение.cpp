#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int x,y;
    cout << "Введите числа которое необходимо умножить:" << "\n";
    cin >> x;
    cin >> y;
    cout << "Результат умножения: " << x*y;
    return 0;
}
