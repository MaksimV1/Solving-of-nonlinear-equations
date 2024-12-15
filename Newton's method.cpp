#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, k, x0, x1;
    float t = 0.001;
    cout << "arccos x - √1-0.3x3 =0" << endl;
    cout << "Введите нижнюю и верхнюю границы отрезка" << endl;
    cin >> a >> b;
    k = (acos(a) - pow(1 - 0.3 * pow(a, 3), 1/2)) * (a / pow(1 - pow(a, 2), 3/2) + (3.6 * a * pow(1 - 0.3 * pow(a, 3), 1/2) + 0.81 * pow(a, 4)) / (4 * pow(1 - 0.3 * pow(a, 3), 1/2)));
    if (k == 0)
    {
        k = (acos(b) - pow(1 - 0.3 * pow(b, 3), 1/2)) * (b / pow(1 - pow(b, 2), 3/2) + (3.6 * b * pow(1 - 0.3 * pow(b, 3), 1/2) + 0.81 * pow(b, 4)) / (4 * pow(1 - 0.3 * pow(b, 3), 1/2)));
         if (k > 0)
        {
            x0 = b;
        }
        else
        {
            x0 = a;
        }
    }
    else
    {
        if (k > 0)
        {
            x0 = a;
        }
        else
        {
            x0 = b;
        }
    }
    x1 = x0;
    do
    {
        x0 = x1;
        x1 = x0 - (acos(x0) - pow(1 - 0.3 * pow(x0, 3), 1/2)) / (-1 / pow(1 - pow(x0, 2), 1/2) + (0.9 * pow(x0, 2)) / (2 * pow(1 - 0.3 * pow(x0, 3), 1/2)));
    } while (fabs(x1 - x0) > t);
    cout << x1;
}