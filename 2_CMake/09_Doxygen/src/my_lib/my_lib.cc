#include <iostream>

#include <nlohmann/json.hpp>

#include "my_lib.h"

/**
 * @brief print hello world.
 *
 * does the real thing.
 */
void print_hello_world()
{
    std::cout << "Hello World!\n";

    std::cout << "JSON Lib Version:" << NLOHMANN_JSON_VERSION_MAJOR << "." << NLOHMANN_JSON_VERSION_MINOR << "."
              << NLOHMANN_JSON_VERSION_PATCH << "\n";
}
