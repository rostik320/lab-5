
#include <iostream>
using namespace std;
int bill(int a, int b)
{
    return a + b;
}
int bill(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Цена первого блюда:" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    cout << "Цена второго блюда:" << endl;
    cin >> b;
    if (b < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    cout << "Цена третьего блюда:" << endl;
    cin >> c;
    if (c < 0)
    {
        cout << "Ты что дебил?" << endl;
        return 1;
    }
    cout << "За два блюда: " << bill(a, b) << endl;
    cout << "За три блюда: " << bill(a, b, c) << endl;
    return 0;
}
