#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, f, x0, x1;
    float t = 0.001;
    cout << "arccos x - √1-0.3x3 =0" << endl;
    cout << "Введите нижнюю и верхнюю границы отрезка" << endl;
    cin >> a >> b;
    f = 0.9 * pow(b, 2) * sin(pow(1 - 0.3 * pow(b, 2), 1/2));
    if (abs(f) < 1)
    {
        x0 = b;
    }
    else
    {
        x0 = a;
    }
    x1 = x0;
    do
    {
        x0 = x1;
        x1 = cos(pow(1 - 0.3 * pow(x0, 3), 1/2));
    } while (abs(x1 - x0) > t);
    cout << x1;
    return 0;
}