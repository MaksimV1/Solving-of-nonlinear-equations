#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;


float halfdiv(float a, float b, float t)
{
    float x0 = (a + b) / 2;
    float k = (acos(a) - pow(1 - 0.3 * pow(a, 3), 0.5)) * (acos(x0) - pow(1 - 0.3 * pow(x0, 3), 0.5));
    if (abs(a - b) <= t)
        return x0;
    else
    {
        if (k == 0)
            return x0;
        else
        {
        if (k < 0)
            return halfdiv(a, x0, t);
        else return halfdiv(x0, b, t);
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    float t = 0.001;
    cout << "arccos x - √1-0.3x3 =0" << endl;
    cout << "Введите нижнюю и верхнюю границы отрезка" << endl;
    cin >> a >> b;
    cout << "Корень уравнения: " << halfdiv(a, b, t);
}