#include "poker.h"

bool is_four(char *cards[]) {
	sort_cards(cards);
	if ((cards[1][0] == cards[2][0] && cards[2][0] == cards[3][0] &&
	cards[3][0] == cards[4][0]) || (cards[2][0] == cards[3][0] &&
	cards[3][0] == cards[4][0] && cards[4][0] == cards[5][0])) {
		return true;
	}
	else {
		return false;
	}
}
