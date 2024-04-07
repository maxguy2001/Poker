// will deal a round of poker
#include "deal_poker.hpp"

namespace utils {
DealPoker::DealPoker() {}

std::vector<std::vector<int>>
DealPoker::dealPlayerCards(const int number_players) {
  return {{0}, {0}};
}

std::vector<int> DealPoker::dealFlop() {
  std::vector<int> placeholder;
  placeholder.push_back(1);
  return placeholder;
}

std::vector<int> DealPoker::dealTurn() {
  std::vector<int> placeholder;
  placeholder.push_back(1);
  return placeholder;
}

std::vector<int> DealPoker::dealRiver() {
  std::vector<int> placeholder;
  placeholder.push_back(1);
  return placeholder;
}

} // namespace utils
