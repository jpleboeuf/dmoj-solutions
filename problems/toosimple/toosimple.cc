#include <iostream>

using namespace std;

// DIGITS:
#define ONE            sizeof(char)
#define ZERO  (ONE   - ONE)
#define TWO   (ONE   + ONE)
#define THREE (TWO   + ONE)
#define FOUR  (THREE + ONE)
#define FIVE  (FOUR  + ONE)
#define SIX   (FIVE  + ONE)
#define SEVEN (SIX   + ONE)
#define EIGHT (SEVEN + ONE)
#define NINE  (EIGHT + ONE)
#define TEN   (NINE  + ONE)

// REQUIRED CHARACTERS:
#define LETTER_H char(TEN * TEN       + FOUR )
#define LETTER_E char(TEN * TEN       + ONE  )
#define LETTER_L char(TEN * TEN       + EIGHT)
#define LETTER_O char(TEN * TEN + TEN + ONE  )
#define LETTER_W char(TEN * TEN + TEN + NINE )
#define LETTER_R char(TEN * TEN + TEN + FOUR )
#define LETTER_D char(TEN * TEN              )
#define PUNCT_COMMA char(TEN * FOUR  + FOUR )
#define PUNCT_SPACE char(TEN * THREE + TWO  )
#define PUNCT_BANG  char(TEN * THREE + THREE)

int main() {
  
  cout
    << char(toupper(LETTER_H)) << LETTER_E << LETTER_L << LETTER_L << LETTER_O
    << PUNCT_COMMA << PUNCT_SPACE
    << char(toupper(LETTER_W)) << LETTER_O << LETTER_R << LETTER_L << LETTER_D
    << PUNCT_BANG
    << endl;

  return ZERO;
}
