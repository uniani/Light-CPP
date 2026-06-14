# Light C++
A Light-weight C++ library for fast coding  
Inspired by LUA

![CPP](https://img.shields.io/badge/%D0%A1%2B%2B%20Version-20%2B-blue?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)

## Why Light C++?
* Beginner friendly: Simple start.
* Light-Weight: small weight.
* Simple: Simple API, LUA inspired.

## API

`print(Any arguments)`  
**Alternative:** `std::cout << text << std::endl;`  
**Usage:** Print all provided arguments.

<br>

`write(text)`  
**Alternative:** `std::cout << text;`  
**Usage:** Print text in the same line (without a line break).

<br>

`input(string prompt)`  
**Alternative:** `std::getline(std::cin, input);`  
**Usage:** Display prompt and return entered text.

<br>

`math::random(int min, int max)`  
**Alternative:** `std::uniform_int_distribution<int>::param_type{min, max};`
**Usage:** Returns random value in provided range.

### Aliases

`string`  
**Instead of:** `std::string`
> **WARNING!** To prevent naming conflict, use `#define LIGHTCPP_NO_SHORT_NAMES` before including the library
