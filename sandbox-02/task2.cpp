#include <iostream>

// найменший степінь двійки, який не менший за x
int next_pow2(int x) {
    int p = 1;          // найменший степінь двійки
    while (p < x) {     // поки ще не дорівнялись до x
        p = p << 1;     // подвоїти: 1 -> 2 -> 4 -> 8 ...
    }
    return p;
}

int main() {
    std::cout << next_pow2(5) << ' ' << next_pow2(64) << ' ' << next_pow2(100) << '\n';
}
