NAME = libft.a

TEST = Tester

CFLAGS = -Wall -Wextra -Werror

VPATH = Testerlibft
#there must be an easier way
SRC = ftputchar.c ftputnbr.c ftatoi.c ftputstr.c\
ftislower.c ftisupper.c ftisalpha.c ftisdigit.c\
ftisalnum.c ftisprint.c ftstrlen.c ftmemset.c\
ftbzero.c ftmemcpy.c ftmemmove.c

AR = ar rcs

OBJ = $(SRC:.c=.o)

all: main

main: $(OBJ)
	$(AR) $(NAME) $(OBJ)

#extra compiling rules for OBJS
#no olvidar dependencies
%.o: %.c library.h
	cc $(CFLAGS) -c $< -o $@
#not really needed makefile already knows
#however establishes .h as a dependency
watch: 
	ls *.c

test: main
	cc main.c $(NAME) -o $(TEST)
	./$(TEST)

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)


tclean: fclean
	$(RM) $(TEST)

re: fclean all

make valgrind: main
	cc main.c $(NAME) -o $(TEST)
	valgrind -s ./$(TEST)

.PHONY: all clean main test