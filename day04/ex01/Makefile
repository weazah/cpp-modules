CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98 
NAME= Brain
SRC= Animal Cat Dog WrongAnimal Brain
OBJ= $(SRC:=.o)
HEADERS = $(SRC:=.hpp)
MAIN= main.cpp

%.o: %.cpp $(HEADERS) 
		$(CC) $(FLAGS)  -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS) $(MAIN)
		$(CC) $(FLAGS) $(MAIN) $(OBJ) -o $(NAME)

clean:
		@ rm -rf $(OBJ)
fclean: clean
		@ rm -rf $(NAME)
re: fclean all%           