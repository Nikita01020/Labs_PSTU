#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double f,g; // �������
    cout << "������� ����� ��������" << "\n";
    cin >> f;
    g = f / 7.481; // ������� � ���������� ����
    cout << "����� ���������� �����" << "\n";
    cout << g; // ����� ����� ���������� �����
    return 0;
}
