#include <iostream>

// Початковий варіант: поля в тому порядку, як дано в задачі
struct Packet {
    char type;
    double value;
    char flags;
    int id;
};

// Охайний варіант: ті самі поля, від найбільшого до найменшого
struct PacketTidy {
    double value;
    int id;
    char type;
    char flags;
};

int main() {
    std::cout << sizeof(Packet) << ' ' << sizeof(PacketTidy) << '\n';
}
