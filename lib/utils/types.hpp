#pragma once
#include <cstdint>
#include <string>

namespace utils {
struct Deck {
  std::uint16_t card_value;
  std::string card_suit;
};
} // namespace utils