NAME = race03

SRCS = src/change_ten.c \
	src/is_dooble_error.c \
	src/is_flush.c \
	src/is_four.c \
	src/is_fullhouse.c \
	src/is_p.c \
	src/is_pair.c \
	src/is_royal.c \
	src/is_sf.c \
	src/is_straight.c \
	src/is_triple.c \
	src/is_twopair.c \
	src/is_valid_suit.c \
	src/is_valid_value.c \
	src/main.c \
	src/mx_putstr.c \
	src/mx_strcmp.c \
	src/mx_strlen.c \
	src/some_error.c \
	src/sort_cards.c \

INC = inc/poker.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: $(NAME)

$(NAME): install clean

install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCS) -I inc
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf poker.h
	@rm -rf change_ten.c \
		is_dooble_error.c \
		is_flush.c \
		is_four.c \
		is_fullhouse.c \
		is_p.c \
		is_pair.c \
		is_royal.c \
		is_sf.c \
		is_straight.c \
		is_triple.c \
		is_twopair.c \
		is_valid_suit.c \
		is_valid_value.c \
		main.c \
		mx_putstr.c \
		mx_strcmp.c \
		mx_strlen.c \
		some_error.c \
		sort_cards.c \

reinstall: all	
