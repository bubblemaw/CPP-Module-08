NAME = mutated

SRCS = main.cpp \

OBJS = $(SRCS:%.cpp=%.o)

RM = rm -f

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME:$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	