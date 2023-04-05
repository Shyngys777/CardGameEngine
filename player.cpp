#include "Player.h"

Player::Player(std::string name) {
    m_name = name;
}

void Player::drawCard(Card card) {
    m_hand.push_back(card);
}

void Player::playCard(int index) {
    m_hand.erase(m_hand.begin() + index);
}

bool Player::hasWon() {
    return m_hand.size() == 0;
}
