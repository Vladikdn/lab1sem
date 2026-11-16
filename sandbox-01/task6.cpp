#include <cmath>
#include <iostream>

int main() {
    int x = 5;                          // 1: додали ;
    std::cout << x << '\n';

    int y = 0;                          // 2: дали початкове значення
    std::cout << y << '\n';

    long long big = 2147483647;         // 3: ширший тип, 8 байтів
    big = big + 1;
    std::cout << big << '\n';

    int a[3] = {1, 2, 3};
    int i = 2;                          // 4: останній дозволений індекс
    std::cout << a[i] << '\n';

    int c = 300;                        // 5: int вміщує 300
    std::cout << c << '\n';

    double d = 0.1 + 0.2;               // 6: порівнюємо з допуском
    if (std::fabs(d - 0.3) < 1e-9) {
        std::cout << "equal" << '\n';
    } else {
        std::cout << "not equal" << '\n';
    }
}
