#include <iostream>

// чи увімкнений біт номер n у числі value
bool bit_is_set(int value, int n) {
    return (value & (1 << n)) != 0;   // спершу & (у дужках), потім порівняння
}

int main() {
    int value = 6;
    std::cout << bit_is_set(value, 0) << ' ' << bit_is_set(value, 1) << ' '
              << bit_is_set(value, 2) << '\n';
}
