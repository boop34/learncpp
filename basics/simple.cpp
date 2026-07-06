#include <iostream>

int main() {
    int x {};

    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::cout << "Double " << x << " is: " << x * 2 << "\n";
    std::cout << "Triple " << x << " is: " << x * 3 << "\n";

    int a {}, b {};

    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Enter another integer: ";
    std::cin >> b;

    std::cout << a << " + " << b << " is " << a + b << "\n";
    std::cout << a << " - " << b << " is " << a - b << "\n";

    return 0;
}
