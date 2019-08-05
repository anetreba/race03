#include "poker.h"

bool is_valid_value(char *s) {
	if (mx_strlen(s) == 2) {
		if (s[0] >= 50 && s[0] <= 57)
			return 1;
		if (s[0] == 'A' || s[0] == 'J'
			|| s[0] == 'K' || s[0] == 'Q')
			return 1;
	}
	if (mx_strlen(s) == 3) {
		if (s[0] == '1' && s[1] == '0')
			return 1;
	}
	return 0;
}

