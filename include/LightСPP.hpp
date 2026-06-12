//Console's Light Code extension
//дополнение Лёгкого кода от Console

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
#include <random>

using string = std::string;

inline void print(auto val) {
    std::cout << val << "\n";
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
    inline int random(int min, int max) {
    static std::mt19937 engine(std::random_device{}());
    static std::uniform_int_distribution<int> dist;
    return dist(engine, std::uniform_int_distribution<int>::param_type{min, max});
    }
}
#endif