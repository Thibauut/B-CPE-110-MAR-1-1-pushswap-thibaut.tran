##
## EPITECH PROJECT, 2021
## B-PSU-100-MAR-1-1-myprintf-thibaut.tran
## File description:
## Makefile
##

SRC	=	src/my_func_lib.c	\
		src/my_func_lib_2.c	\
		src/init_link_chain.c	\
		src/func_link_chain.c	\
		src/func_op.c	\
		push_swap.c

# OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all	:	$(NAME)	$(SRC)

$(NAME)	:
	gcc	-o $(NAME) $(SRC) -g3

clean :
	rm	-f	*.o
	rm	-f	*~
	rm -f src/*.o

fclean :clean
	rm	-f	$(NAME)

re :	fclean	all