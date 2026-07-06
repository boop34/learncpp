#include <iostream>

int main() {
    /*
     * Recomended way to initialize
    int w1 { 4.5 };    // compile error: list-init does not allow narrowing conversion
    */
    int w2 = 4.5;       // compiles: w2 copy-initialized to value 4
    int w3 (4.5);       // compiles: w3 direct-initialized to vallue 4

    int width {};       // value-initialization / zero initialization to value 0

    int i { 5 }, j { 6 };

    [[maybe_unused]] double pi { 3.14159 }; // tells compiler to be ok with unused var

    return 0;
}
