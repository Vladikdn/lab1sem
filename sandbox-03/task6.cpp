#include <iostream>

int sum(const int* begin, const int* end) {
    int total = 0;
    for (const int* p = begin; p != end; ++p) {
        total = total + *p;
    }
    return total;
}

int main() {
    int a[3] = {1, 2, 3};
    std::cout << sum(a, a + 3) << ' ' << sum(a, a) << '\n';
}
