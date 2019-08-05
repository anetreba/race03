#include "poker.h"

void change_ten(char *cards[]) {
	for (int i = 1; i < 6; i++) {
		if (cards[i][0] == '1' && cards[i][1] == '0') {
			cards[i][1] = cards[i][2];
			cards[i][2] = '\0';
			cards[i][0] = 'T';
		}
	}
}
