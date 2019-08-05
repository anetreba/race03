#include "poker.h"

bool is_valid_suit(char s) {
	if (s == 'H' || s == 'D' || s == 'S' || s == 'C')
		return 1;
	return 0;
}
