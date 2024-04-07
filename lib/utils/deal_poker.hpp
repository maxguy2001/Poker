#pragma once
#include <vector>

namespace utils {
class DealPoker {

  DealPoker();
  std::vector<std::vector<int>> dealPlayerCards(const int number_players);
  std::vector<int> dealFlop();
  std::vector<int> dealTurn();
  std::vector<int> dealRiver();
};

} // namespace utils
