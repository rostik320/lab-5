
#include <iostream>
using namespace std;
int lunchCost(int dishPrice, int quantity)
{
    return dishPrice * quantity;
}
void addTip(int bill)
{
    bill = bill + 3;
    cout << "Всего: " << bill << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Цена:" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    cout << "Количество:" << endl;
    cin >> b;
    if (b < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    c = lunchCost(a, b);
    addTip(c);
    return 0;
}
