NAME = NAME

SRC = src/main.cpp

OBJ := 	$(SRC:%.cpp=%.o)

CXX = c++
CXXFLAGS = -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME) && echo "\033[32mProgramm compiled successfully!\033[0m"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

fclean:
	@rm -f $(NAME) $(OBJ) > /dev/null && echo "\033[31mProgramm cleared successfully!\033[0m"

re: fclean all

.PHONY: all fclean re