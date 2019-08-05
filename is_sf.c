#include "poker.h"

bool is_sf(char *cards[]) {
	if (is_straight(cards) && is_flush(cards)) {
		return true;
	}
	else {
		return false;
	}
}
