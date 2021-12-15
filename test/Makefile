FILES 	= ../get_next_line.c \
		  ../get_next_line_utils.c \
		  gnl_test.c \
		  gnl_test_utils.c
INC		= ../get_next_line.h \
		  gnl_test.h
CC		= gcc
CFLAGS	= -Wextra -Wall -Werror -g -D BUFFER_SIZE=1

all: main

main:
	$(CC) $(CFLAGS) $(FILES) $(INC)

