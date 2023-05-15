NAME = test

SRC = cpp_module02/*.cpp #changer le dossier pour tester un autre module et changer le main de place

all:
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)
	./$(NAME)
