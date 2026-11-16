#include <cstdint>
#include <iostream>

int main() {
    std::uint16_t odometer = 65000;   // лічильник на два байти
    int km = 0;                       // скільки проїхали

    do {
        odometer = (std::uint16_t)(odometer + 1);
        km = km + 1;
    } while (odometer != 0);

    std::cout << km << '\n';
}
