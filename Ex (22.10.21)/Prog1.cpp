#include <iostream>

using namespace std;

int main()
{
    int ch; //число вводимое пользователем
    setlocale(LC_ALL, "Rus");
    cout << "Введите трехзначное число" << "\n";
    cin >> ch;
    int a,b,c; //цифры введенного числа
    int m;

    c = ch % 10;
    b = (ch / 10) % 10;
    a = ch / 100;

    while (((a == b) || (c == b || (a == c)) || ((ch < 100) || (ch > 1000)))){
           cout << "Цифры числа не должны повторяться, число должно быть трехзначным" << "\n";
           cout << "Введите новое число" << "\n";
           cin >> ch;
           c = ch % 10;
            b = (ch / 10) % 10;
            a = ch / 100;

           }

    cout << "Всевозможные числа, составленные из цифр введенного числа:" << "\n";
        cout << a << b << c<< "\n";

        m = c;
        c = b;
        b = m;
        cout << a << b << c<< "\n";

        m = a;
        a = b;
        b = m;
        cout << a << b << c<< "\n";

        m = a;
        a = c;
        c = m;
        cout << a << b << c<< "\n";

        m = c;
        c = b;
        b = m;
        cout << a << b << c<< "\n";

        m = a;
        a = b;
        b = m;
        cout << a << b << c<< "\n";


cout << "Максимальное число, которое можно составить из цифр введенного числа: ";

        if ((a > b) && (a> c)) {
                    if (b > c) {
                            cout << a << b << c << endl;
                    }
                    else {
                            cout << a << c << b << endl;
                    }
        }
        else {
            if (b > c) {
                    if (a > c) {
                            cout << b << a << c << endl;
                    }
                    else{
                        cout << b << c << a << endl;
                    }
            }
                else{
                    if (a > b) {
                            cout << c << a << b << endl;
                    }
                    else {
                        cout << c << b << a << endl;
                    }
                }
    }
    return 0;
}
