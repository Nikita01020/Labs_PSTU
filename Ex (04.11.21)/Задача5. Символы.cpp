#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    char a[5]; // ������ ��� ����� ������
    char x; // ������

    cout << "������� �������:" << "\n";

    for (int i=0;i<5;i++){
        cin >> x; //���� ��������
        a[i] = x;
    }

    cout << "������� � �������� �������: " << "\n";

    for (int i=4;i>-1;i--){
        cout << a[i] << " "; //����� ��������
    }

    return 0;
}
