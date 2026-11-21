#include <iostream>

int main() {
    int best_start = 1;
    int best_steps = 0;

    for (int start = 1; start <= 99; ++start) {
        int n = start;
        int steps = 0;
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = 3 * n + 1;
            }
            ++steps;
        }
        if (steps > best_steps) {
            best_steps = steps;
            best_start = start;
        }
    }

    std::cout << best_start << ' ' << best_steps << '\n';
}
