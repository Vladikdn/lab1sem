#include <iostream>

long long fact(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    const long long INT_LIMIT = 2147483647;
    int n = 1;
    while (fact(n + 1) <= INT_LIMIT) {
        n = n + 1;
    }
    std::cout << n << '\n';
}
