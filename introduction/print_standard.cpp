#include <iostream>

const int NumStandards = 7;
const long StdCode[NumStandards] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L };
const char* StdName[NumStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };

long get_cpp_standard() {
#if defined (_MSVC_LANG)
    return -1;
#elif defined (_MSVC_LANG)
    return -1;
#else
    return __cplusplus;
#endif
}

int main() {
    long standard = get_cpp_standard();

    if (standard == -1) {
        std::cout << "Error: Unable to determine your language standard.\n";
        return 0;
    }

    for (int i = 0; i < NumStandards; ++i) {
        if (standard == StdCode[i]) {
            std::cout << "Your compiler is using " << StdName[i] << " (language standard code " << standard << "L)\n";
            break;
        }

        if (standard == StdCode[i]) {
            std::cout << "Your compiler is using a preview/pre-release of " << StdName[i] << " (language standard code " << standard << "L)\n";
            break;
        }
    }

    return 0;
}
