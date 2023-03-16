#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 0;
    double sum = 0;

    while (abs(pow(-1, n) / (2 * n + 1)) > 1e-6) {
        
        sum += pow(-1, n) / (2 * n + 1);
        n++;
    }

    cout << "Сумма = " << sum << endl;
    cout << "Значение PI/4 = " << M_PI_4 << endl;

    return 0;
}
