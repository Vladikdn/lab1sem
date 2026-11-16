#include <cmath>
#include <iostream>

int celsius(int f) {
    double c = (f - 32) * 5.0 / 9.0;   // рахуємо з дробом
    return (int)std::lround(c);        // округлюємо до найближчого
}

int main() {
    std::cout << celsius(100) << ' ' << celsius(0) << ' ' << celsius(212) << '\n';
}
