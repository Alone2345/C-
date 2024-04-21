#include <iostream>
using namespace std;

float P_rectangle(float a, float b) {
    return 2 * (a + b);
}

float S_rectangle(float a, float b) {
    return a * b;
}

int main() {
    setlocale(LC_ALL, "RUS");
    float a, b;
    int sum = P_rectangle(a, b);
    int multiplication = S_rectangle(a, b);
    cout << "Периметр прямоугольника: " << sum << endl;
    cout << "Площадь прямоугольника: " << multiplication << endl;
    return 0;
}
