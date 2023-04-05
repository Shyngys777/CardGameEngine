#include "Card.h"

Card::Card(Color color, Value value) {
    m_color = color;
    m_value = value;
}

Color Card::getColor() {
    return m_color;
}

Value Card::getValue() {
    return m_value;
}
