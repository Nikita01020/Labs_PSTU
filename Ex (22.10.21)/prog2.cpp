#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

    srand(time(0));
    int ch = rand() % 100;
    setlocale(LC_ALL, "Rus");
    int  k, x;
    k = 7; // счетсчик попыток
    x = -1; // число, вводимое пользоватеелем



    cout << "Введите число, осталось попыток 7" << "\n";

    while ((k >= 1) && (x != ch)) {

        cout << "Попробуйте угадать загаданное число:" << "\n";
        cin >> x;

        if (x > ch) {
            cout << "Загаданное число меньше" << "\n";
        }
        else if (x < ch) {
            cout << "Загаданное число больше" << "\n";
        }


        if (x == ch) {
            cout << "Поздравляем! Вы угадали загаданное число" << "\n";
            break;
        }

        k--;
        cout << "Вы не угадали, количество попыток " << k << endl;
    }

    return 0;
}
