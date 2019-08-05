#include "poker.h"

bool is_p(char *cards[], char val) {
	for (int i = 1; i < 6; i++) {
		if (cards[i][0] == val) {
			return true;
		}
	}
	return false;
}
