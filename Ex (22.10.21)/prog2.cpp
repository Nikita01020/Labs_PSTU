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
    k = 7; // �������� �������
    x = -1; // �����, �������� ��������������



    cout << "������� �����, �������� ������� 7" << "\n";

    while ((k >= 1) && (x != ch)) {

        cout << "���������� ������� ���������� �����:" << "\n";
        cin >> x;

        if (x > ch) {
            cout << "���������� ����� ������" << "\n";
        }
        else if (x < ch) {
            cout << "���������� ����� ������" << "\n";
        }


        if (x == ch) {
            cout << "�����������! �� ������� ���������� �����" << "\n";
            break;
        }

        k--;
        cout << "�� �� �������, ���������� ������� " << k << endl;
    }

    return 0;
}
