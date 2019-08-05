#include "poker.h"

bool is_straight(char *cards[]) {
	if ((is_p(cards, 'A') && is_p(cards, '2') && is_p(cards, '3') &&
	is_p(cards, '4') && is_p(cards, '5')) || (is_p(cards, '2') &&
	is_p(cards, '3') && is_p(cards, '4') && is_p(cards, '5') &&
	is_p(cards, '6')) || (is_p(cards, '3') && is_p(cards, '4') &&
	is_p(cards, '5') && is_p(cards, '6') && is_p(cards, '7')) ||
	(is_p(cards, '4') && is_p(cards, '5') && is_p(cards, '6') &&
	is_p(cards, '7') && is_p(cards, '8')) || (is_p(cards, '5') &&
	is_p(cards, '6') && is_p(cards, '7') && is_p(cards, '8') &&
	is_p(cards, '9')) || (is_p(cards, '6') && is_p(cards, '7') &&
	is_p(cards, '8') && is_p(cards, '9') && is_p(cards, 'T')) ||
	(is_p(cards, '7') && is_p(cards, '8') && is_p(cards, '9') &&
	is_p(cards, 'T') && is_p(cards, 'J')) || (is_p(cards, '8') &&
	is_p(cards, '9') && is_p(cards, 'T') && is_p(cards, 'J') &&
	is_p(cards, 'Q')) || (is_p(cards, '9') && is_p(cards, 'T') &&
	is_p(cards, 'J') && is_p(cards, 'Q') && is_p(cards, 'K')) ||
	(is_p(cards, 'T') && is_p(cards, 'J') && is_p(cards, 'Q') &&
	is_p(cards, 'K') && is_p(cards, 'A'))) {
		return true;
	}
	else return false;
}
