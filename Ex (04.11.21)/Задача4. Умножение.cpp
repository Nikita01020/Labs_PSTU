#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int x,y;
    cout << "������� ����� ������� ���������� ��������:" << "\n";
    cin >> x;
    cin >> y;
    cout << "��������� ���������: " << x*y;
    return 0;
}
