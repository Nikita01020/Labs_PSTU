#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    char a[5]; // массив для ввода символ
    char x; // символ

    cout << "Введите символы:" << "\n";

    for (int i=0;i<5;i++){
        cin >> x; //Ввод символов
        a[i] = x;
    }

    cout << "Символы в обратном порядке: " << "\n";

    for (int i=4;i>-1;i--){
        cout << a[i] << " "; //Вывод символов
    }

    return 0;
}
