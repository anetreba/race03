#include "poker.h"

void some_error(char **av) {
	for (int i = 1; i < 6; i++) {
		if (mx_strlen(av[i]) > 3) {
            write(2, "Invalid card: ", 14);
            write(2, av[i], mx_strlen(av[i]));
            write(2, "\n", 1);
            exit(-1);
        }
		else if (!(is_valid_value(av[i]))
			&& !(is_valid_suit(av[i][mx_strlen(av[i]) - 1]))) {
			write(2, "Invalid card: ", 14);
			write(2, av[i], mx_strlen(av[i]));
			write(2, "\n", 1);
			exit(-1);
		}
		else if (!(is_valid_value(av[i]))) {
			write(2, "Invalid card rank: ", 19);
			write(2, av[i], mx_strlen(av[i]) - 1);
			write(2, "\n", 1);
			exit(-1);
		}
		else if (!(is_valid_suit(av[i][mx_strlen(av[i]) - 1]))) {
			write(2, "Invalid card suit: ", 19);
			write(2, &av[i][mx_strlen(av[i]) - 1], 1);
			write(2, "\n", 1);
			exit(-1);
		}
	}
}
