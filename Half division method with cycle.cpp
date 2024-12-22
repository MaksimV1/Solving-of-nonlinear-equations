#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, k, x0;
    float t = 0.001;
    cout << "arccos x - √1-0.3x3 =0" << endl;
    cout << "Введите нижнюю и верхнюю границы отрезка" << endl;
    cin >> a >> b;
    do
    {
        x0 = (a + b) / 2;
        k = (acos(a) - pow(1 - 0.3 * pow(a, 3), 0.5)) * (acos(x0) - pow(1 - 0.3 * pow(x0, 3), 0.5));
        if (k == 0)
        {
            a = x0;
            b = x0;
        }
        else
        {
            if (k < 0)
                b = x0;
            else a = x0;
        }
    } while (abs(a - b) > t);
    cout << "Корень уравнения: " << x0;
}