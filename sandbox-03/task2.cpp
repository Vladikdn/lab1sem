#include <iostream>

void swap_ptr(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void sort3(int* a, int* b, int* c) {
    if (*a > *b) swap_ptr(a, b);
    if (*b > *c) swap_ptr(b, c);
    if (*a > *b) swap_ptr(a, b);
}

int main() {
    int x = 3, y = 1, z = 2;
    sort3(&x, &y, &z);
    std::cout << x << ' ' << y << ' ' << z << '\n';

    int p = 9, q = 9, r = 1;
    sort3(&p, &q, &r);
    std::cout << p << ' ' << q << ' ' << r << '\n';
}
