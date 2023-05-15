NAME = test

SRC = cpp_module02/*.cpp #change le dossier pour tester un autre module et change le main de place

all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)
	./$(NAME)
