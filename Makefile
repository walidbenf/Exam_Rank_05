NAME = exam
SRC = cpp_module02/*.cpp main.cpp

all:
	c++ -Wall -Werror -Wextra -std=c++98 $(SRC) -o $(NAME)
	./$(NAME) | cat -e