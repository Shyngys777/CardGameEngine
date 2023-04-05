#include "Deck.h"
#include <cstdlib>
#include <ctime>

Deck::Deck() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            m_cards.push_back(Card((Color)i, (Value)j));
        }
    }
    for (int i = 0; i < 4; i++) {
        m_cards.push_back(Card(WILD, WILD));
    }
    shuffle();
}

void Deck::shuffle() {
    srand(time(NULL));
    for (int i = m_cards.size() - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = m_cards[i];
        m_cards[i] = m_cards[j];
        m_cards[j] = temp;
    }
}

Card Deck::dealCard() {
    Card card = m_cards.back();
    m_cards.pop_back();
    return card;
}
