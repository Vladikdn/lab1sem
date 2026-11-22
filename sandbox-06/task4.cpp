#include <cstdint>
#include <iostream>

// Кладе b[i] у біт номер i одного байта
std::uint8_t pack(const bool b[8]) {
    std::uint8_t result = 0;
    for (int i = 0; i < 8; ++i) {
        if (b[i]) {
            result = (std::uint8_t)(result | (1 << i));
        }
    }
    return result;
}

int main() {
    bool buttons[8] = {1, 0, 0, 1, 1, 0, 0, 0};
    std::uint8_t packed = pack(buttons);
    std::cout << (int)packed << '\n';

    // Розпаковуємо: дістаємо кожен біт назад
    for (int i = 0; i < 8; ++i) {
        std::cout << ((packed >> i) & 1);
        if (i < 7) {
            std::cout << ' ';
        }
    }
    std::cout << '\n';
}
