#include "poker.h"

bool is_royal(char *cards[]) {
	if (is_p(cards, 'T') && is_p(cards, 'J') && is_p(cards, 'Q') &&
	is_p(cards, 'K') && is_p(cards, 'A') && is_flush(cards)) {
		return true;
	}
	else {
		return false;
	}
}
