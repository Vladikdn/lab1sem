#include <iostream>

void to_upper(char* s) {
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (char)(s[i] - 32);   // 'a' - 'A' == 32
        }
    }
}

int main() {
    char a[] = "hello world 2";
    char b[] = "HAL 9000";
    to_upper(a);
    to_upper(b);
    std::cout << a << '\n' << b << '\n';
}
