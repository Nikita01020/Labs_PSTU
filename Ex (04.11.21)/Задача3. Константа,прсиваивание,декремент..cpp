#include <iostream>
using namespace std;
int main()
{
    const int C = 10; // �������� ���������
    int x,y,t;
    setlocale(LC_ALL, "Rus");
    x = 2 * C; // �������� ������������ ��� ��������� �������� 20 �� ���������
    t = x;
    y = --(t); // �������� ���������� ��� ��������� �������� 19 �� ���������
    cout << C << "\n";
    cout << x << "\n";
    cout << y << "\n";
    return 0;
}
