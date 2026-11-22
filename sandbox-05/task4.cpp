#include <iostream>

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int shifts = 0;

    for (int i = 1; i < 5; ++i) {
        int current = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > current) {
            a[j + 1] = a[j];
            shifts = shifts + 1;
            j = j - 1;
        }
        a[j + 1] = current;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << shifts << '\n';
}
