#include <iostream>

using namespace std;

int main()
{
    int ch; //����� �������� �������������
    setlocale(LC_ALL, "Rus");
    cout << "������� ����������� �����" << "\n";
    cin >> ch;
    int a,b,c; //����� ���������� �����
    int m;

    c = ch % 10;
    b = (ch / 10) % 10;
    a = ch / 100;

    while (((a == b) || (c == b || (a == c)) || ((ch < 100) || (ch > 1000)))){
           cout << "����� ����� �� ������ �����������, ����� ������ ���� �����������" << "\n";
           cout << "������� ����� �����" << "\n";
           cin >> ch;
           c = ch % 10;
            b = (ch / 10) % 10;
            a = ch / 100;

           }

    cout << "������������ �����, ������������ �� ���� ���������� �����:" << "\n";
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


cout << "������������ �����, ������� ����� ��������� �� ���� ���������� �����: ";

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
