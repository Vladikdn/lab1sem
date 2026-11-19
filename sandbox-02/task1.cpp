#include <cstdint>
#include <iostream>

// повертає 1, якщо в байті непарна кількість одиниць
bool parity(std::uint8_t b) {
    int ones = 0;                   // скільки одиниць знайшли
    while (b != 0) {                // поки в байті ще є одиниці
        ones += b & 1;              // додати молодший біт (0 або 1)
        b = (std::uint8_t)(b >> 1); // зсунути все праворуч на 1
    }
    return (ones & 1) == 1;         // непарна кількість → 1
}

int main() {
    std::cout << parity(0xA3) << ' ' << parity(0x07) << ' ' << parity(0xFF) << '\n';
}
