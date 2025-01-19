#include <config.hpp>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <string_view>
#include <vector>


auto main(int32_t agrc, char **agrv) -> int32_t {
  std::cout << std::setw(42) << std::left << "[PROGECT_VERSION][major.minor.patch] " << PROGECT_VERSION << std::endl
            << std::setw(42) << std::left << "[PROGECT_LANG_CPP_STANDART][C++]" << PROGECT_LANG_CPP_STANDART
            << std::endl
            << std::setw(42) << std::left << "[PROGECT_LANG_C_STANDART][C]" << PROGECT_LANG_C_STANDART << std::endl
            << std::endl
            << std::endl;

  return EXIT_SUCCESS;
};