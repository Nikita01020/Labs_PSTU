#include <iostream>
using namespace std;
int main()
{
    const int C = 10; // ќписание константы
    int x,y,t;
    setlocale(LC_ALL, "Rus");
    x = 2 * C; // ќпераци€ присваивани€ дл€ получени€ значени€ 20 из константы
    t = x;
    y = --(t); // ќпераци€ декремента дл€ получени€ значени€ 19 из константы
    cout << C << "\n";
    cout << x << "\n";
    cout << y << "\n";
    return 0;
}
