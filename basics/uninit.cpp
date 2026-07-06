#include <iostream>

void do_nothing(int&) {}

int main() {
    int x;  // undefined behaviour

    std::cout << x << "\n";
    do_nothing(x);
    std::cout << x << "\n";

    std::cout << sizeof(int) << "\n"; // size in bytes

    std::cout << (x = 5) << "\n";

    return 0;
}
