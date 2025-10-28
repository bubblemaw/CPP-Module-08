NAME = span

SRCS = main.cpp \
	Span.cpp \


OBJS = $(SRCS:%.cpp=%.o)

RM = rm -f

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME) : $(OBJS)
	c++ $(OBJS) $(FLAGS) -o $(NAME)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all