#include <iostream>

int main() {
    std::cout << "Enter a number: \n";  // \n is prefred over endl as endl
                                        // prints a new line and flushes buffer
                                        // which is slow
    int x {};   // if we later assign value it's better to leave the value empty
                // which is just 0; but if we want to use the 0 itself then it
                // better to initialized with { 0 }

    std::cout << x << "\n";
    std::cin >> x;
    std::cout << "You entered: " << x << "\n";
    std::cout << "Now enter two numbers: \n";

    int y {}, z {};

    std::cin >> y >> z;
    std::cout << "Two numbers are: " << y << " " << z << "\n";

    // cin and cout are buffered
    // if we eneter a large number > MAX_INT in the first input then as x is
    // int it get MAX_INT value and the cin enters fail state, so there is no
    // more input accepted by cin, if only if clear cin std::cin.clear() then
    // it'll start accepting new input again
    // except + and - if cin encounters any other characters then it goes to
    // fail state

    return 0;
}
