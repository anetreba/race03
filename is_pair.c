#include "poker.h"

bool is_pair(char *cards[]) {
	char c1 = cards[1][0];
	char c2 = cards[2][0];
	char c3 = cards[3][0];
	char c4 = cards[4][0];
	char c5 = cards[5][0];

	if (c1 == c2 || c1 == c3 || c1 == c4 || c1 == c5 || c2 == c3 ||
	c2 == c4 || c2 == c5 || c3 == c4 || c3 == c5 || c4 == c5) {
		return true;
	}
	else {
		return false;
	}
}
