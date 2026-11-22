#include <cstdint>
#include <iostream>

std::uint8_t mirror(std::uint8_t b) {
    std::uint8_t result = 0;
    for (int i = 0; i < 8; ++i) {
        int bit = (b >> i) & 1;
        if (bit == 1) {
            result = (std::uint8_t)(result | (1 << (7 - i)));
        }
    }
    return result;
}

int main() {
    std::cout << std::hex
              << (int)mirror(0x01) << ' '
              << (int)mirror(0xA0) << ' '
              << (int)mirror(0x3C) << '\n';
}
