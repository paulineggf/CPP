SRCS =	main.cpp 	\
	FragTrap.cpp	\
	Robot.cpp	\
	ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)
NAME = FragTrap 
RM = rm -f
CC = clang++
CFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

