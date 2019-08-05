#ifndef POKER_HEAD
#define POKER_HEAD

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void change_ten(char *cards[]);
void sort_cards(char *cards[]);
bool is_p(char *cards[], char val);
bool is_pair(char *cards[]);
bool is_twopair(char *cards[]);
bool is_triple(char *cards[]);
bool is_flush(char *cards[]);
bool is_straight(char *cards[]);
bool is_fullhouse(char *cards[]);
bool is_four(char *cards[]);
bool is_sf(char *cards[]);
bool is_royal(char *cards[]);

int mx_strlen(char *s);
int mx_strcmp(const char *s1, const char *s2);
bool is_valid_suit(char s);
bool is_valid_value(char *s);
void is_dooble_error(char **av);
void some_error(char **av);
void mx_putstr(char *s, int fd);

#endif
