#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double c,f;
    cout << "������� ����������� (�� ����������): ";
    cin >> f;
    c = 5.0/9.0*(f-32);
    cout << "����������� (�� �������): " << c;
    return 0;
}
