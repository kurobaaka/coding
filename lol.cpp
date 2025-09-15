#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cout << "Введите x (|x| > 1): ";
    cin >> x;
    
    if (abs(x) <= 1) {
        cout << "Ошибка: x должен быть больше 1 или меньше -1";
        return 1;
    }
    
    double result = 0;
    int n = 1;
    
    // Вычисляем ряд: 1/x + 1/(3x^3) + 1/(5x^5) + ...
    while (n <= 1000) {
        result += 1.0 / (n * pow(x, n));
        n += 2;
    }
    
    cout << "Результат: " << result << endl;
    return 0;
}