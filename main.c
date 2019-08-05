#include "poker.h"

int main(int ac, char **av) {
	if (ac == 6) {
		is_dooble_error(av);
		some_error(av);
		change_ten(av);
		if (is_royal(av)) mx_putstr("Royal flush\n", 1);
		else if (is_sf(av)) mx_putstr("Straight flush\n", 1);
		else if (is_four(av)) mx_putstr("Four of a kind\n", 1);
		else if (is_fullhouse(av)) mx_putstr("Full house\n", 1);
		else if (is_flush(av)) mx_putstr("Flush\n", 1);
		else if (is_straight(av)) mx_putstr("Straight\n", 1);
		else if (is_triple(av)) mx_putstr("Three of a kind\n", 1);
		else if (is_twopair(av)) mx_putstr("Two pair\n", 1);
		else if (is_pair(av)) mx_putstr("One pair\n", 1);
		else mx_putstr("No pair\n", 1);
		return 0;
	}
	mx_putstr("usage: ./race03 [card1] [card3] [card3] [card4] [card5]\n", 2);
	exit(-1);
}
