
#include <iostream>
using namespace std;
int teaCost(int price, int cups = 1)
{
    return price * cups;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    cout << "Цена чая:" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    cout << "Количество кружек чая:" << endl;
    cin >> b;
    if (b < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    
    cout << "Всего: " << teaCost(a, b) << endl;
    return 0;
}
