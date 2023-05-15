NAME = test

SRC = cpp_module02/*.cpp

all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)
	./$(NAME)