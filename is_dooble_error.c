#include "poker.h"

void is_dooble_error(char **av) {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (mx_strcmp(av[i], av[j]) == 0) {
				write(2, "Duplicate cards: ", 17);
				write(2, av[i], mx_strlen(av[i]));
				write(2, "\n", 1);
				exit(-1);
			}
		}
	}
}
