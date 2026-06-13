//Console's Light Code extension
//дополнение Лёгкого кода от Console

#ifndef Console_LightCPP
#define Console_LightCPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <random>

#ifndef LIGHTCPP_NO_SHORT_NAMES
using string = std::string;
#endif

template <typename... Val>
inline void print(Val... val) {
    std::cout << ... << val << "\n";
}
inline void write(auto val) {
    std::cout << val;
}
inline std::string input(std::string prompt = "") {
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