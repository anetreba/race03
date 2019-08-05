#include "poker.h"

void mx_putstr(char *s, int fd) {
	write(fd, s, mx_strlen(s));
}
