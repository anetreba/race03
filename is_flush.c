#include "poker.h"

bool is_flush(char *cards[]) {
	if (cards[1][1] == cards[2][1] && cards[2][1] == cards[3][1] &&
	cards[3][1] == cards[4][1] && cards[4][1] == cards[5][1]) {
		return true;
	}
	else {
		return false;
	}
}
