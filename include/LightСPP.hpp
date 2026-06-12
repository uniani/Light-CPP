//Console's Light Code extension
//дополнение Лёгкого кода от Console

//Code Below
#ifndef Consoles_LightCPP
#define Consoles_LightCPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using string = std::string;

inline void print(auto val) {
    std::cout << val << std::endl;
}
inline void write(auto val) {
    std::cout << val;
}
inline string input(string prompt = "") {
    std::cout << prompt;
    std::string inputed;
    std::getline(std::cin, inputed);
    return inputed;
}
namespace math {
    struct Init { Init() { std::srand(time(0)); } };
    static Init init;
    inline int random(int min, int max) {
        return min + (std::rand() % (max - min + 1));
    }
}
#endif
