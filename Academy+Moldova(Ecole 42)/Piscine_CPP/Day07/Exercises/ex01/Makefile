NAME = iter
FLAGS = -Wall -Werror -Wextra
SRC = iter.cpp
CC = clang++
OSRC =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OSRC)
	$(CC) -o $(NAME) $(FLAGS) $(OSRC)

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all