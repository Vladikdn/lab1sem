#include <iostream>

struct Point {
    int x, y;
};

int main() {
    Point* pts = new Point[3];   // три Point на купі
    for (int i = 0; i < 3; ++i) {
        pts[i].x = i + 1;        // 1, 2, 3
        pts[i].y = 0;
    }

    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        sum = sum + pts[i].x;
    }
    std::cout << sum << '\n';

    delete[] pts;                // масив звільняємо через delete[]
    pts = nullptr;               // вказівник більше нікуди не вказує
}
