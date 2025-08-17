CC      = cc
NAME    = libft.a
CFLAGS  = -Wall -Wextra -Werror

SRC =
BONUS   = 

OBJS        = $(SRC:.c=.o)
BONUS_OBJS  = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	@$(MAKE) OBJS="$(OBJS) $(BONUS_OBJS)"

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
