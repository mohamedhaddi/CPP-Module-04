CC=c++
SRC=main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
CFLAGS=-Wall -Wextra -Werror -std=c++98
DFLAGS=-g -fsanitize=address
NAME=Polymorphism

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
