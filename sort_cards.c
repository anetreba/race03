#include "poker.h"

void sort_cards(char *cards[]) {
	char *swop;
	int i = 0;
	int check = 1;

	while (check == 1) {
		check = 0;
		for (i = 1; i < 5; i++) {
			if (cards[i][0] > cards[i + 1][0]) {
				swop = cards[i];
				cards[i] = cards[i + 1];
				cards[i + 1] = swop;
				check = 1;
			}
		}
	}
}
