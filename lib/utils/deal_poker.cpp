// will deal a round of poker
#include "deal_poker.hpp"

namespace utils {
DealPoker::DealPoker() {}

std::vector<std::vector<Deck>>
DealPoker::dealPlayerCards(const int number_players) {
  // TODO: impement pick card which keeps track of already used cards and allows
  // random picking
  std::vector<std::vector<Deck>> player_hands;
  std::vector<Deck> temp_hand;
  Deck temp_card;
  for (std::size_t i = 0; i < number_players; ++i) {
    temp_card.card_suit = "Hearts";
    temp_card.card_value = 12;
    temp_hand.push_back(temp_card);
    player_hands.push_back(temp_hand);
  }
  return player_hands;
}

std::vector<Deck> DealPoker::dealFlop() {
  std::vector<Deck> placeholder;
  Deck placeholder_deck;
  placeholder_deck.card_suit = "Spades";
  placeholder_deck.card_value = 1;
  placeholder.push_back(placeholder_deck);
  return placeholder;
}

std::vector<Deck> DealPoker::dealTurn() {
  std::vector<Deck> placeholder;
  Deck placeholder_deck;
  placeholder_deck.card_suit = "Spades";
  placeholder_deck.card_value = 1;
  placeholder.push_back(placeholder_deck);
  return placeholder;
}

std::vector<Deck> DealPoker::dealRiver() {
  std::vector<Deck> placeholder;
  Deck placeholder_deck;
  placeholder_deck.card_suit = "Spades";
  placeholder_deck.card_value = 1;
  placeholder.push_back(placeholder_deck);
  return placeholder;
}

} // namespace utils
