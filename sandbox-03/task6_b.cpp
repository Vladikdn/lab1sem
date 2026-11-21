#include <cstdint>
#include <iostream>
int main() {
    int a[3] = {1, 2, 3};
    (void)a;
    int* p = nullptr;
    std::cout << *p << '\n';
    p = p + 1;
    std::cout << *p << '\n';
}
