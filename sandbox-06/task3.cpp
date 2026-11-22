#include <iostream>

struct Vec {
    int x, y;
};

// Отримує копії a і b, повертає нову структуру-суму (теж копією)
Vec add(Vec a, Vec b) {
    Vec r;
    r.x = a.x + b.x;
    r.y = a.y + b.y;
    return r;
}

// Отримує адресу оригіналу і змінює сам оригінал
void scale(Vec* v, int k) {
    v->x = v->x * k;
    v->y = v->y * k;
}

int main() {
    Vec s = add({1, 2}, {3, 4});
    std::cout << s.x << ' ' << s.y << '\n';
    scale(&s, 2);
    std::cout << s.x << ' ' << s.y << '\n';
}
