#pragma once
#include "types.hpp"
#include <vector>

namespace utils {
class DealPoker {

  DealPoker();
  std::vector<std::vector<Deck>> dealPlayerCards(const int number_players);
  std::vector<Deck> dealFlop();
  std::vector<Deck> dealTurn();
  std::vector<Deck> dealRiver();
};

} // namespace utils
