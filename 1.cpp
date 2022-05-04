#include <iostream>


using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    double a, b, x, h, c, y, f;

    cout << "Введите начало интервала a= ";
    cin >> a;
    cout << "Введите конец интервала b= ";
    cin >> b;

    if (b < a){cout << "b<a, введите данные корректно. " << endl; return 0;}

    cout << "Шаг h = ";
    cin >> h;

    cout << "Введите значение c = ";
    cin >> c;

    cout << "Введите значение х = ";
    cin >> x;


    for (y = a; y <= b; y += h)
    {

        try
        {
            if ((c + y) == 0) throw"-не определенна";

            if ((c + pow(x, 2.) * (pow(cos(x), 5.) - c)) < 0) throw"-не определенна";

            if ((sin(x) + log(y)) < 0) throw"-не определенна";

            if (y <= 0) throw"-не определенна";

            f = ((sqrt(c + pow(x, 2.) * (pow(cos(x), 5.) - c)) + pow((sin(x) + log(y)), 1.0 / 5)) / (c + y));

            cout <<  "f(x) = " << f << endl;

        }

        catch (const char* s)

        {
            cout <<"F(x)" << "-не определенна" << endl;
        }
    }
    system("Pause");
    return 0;
}