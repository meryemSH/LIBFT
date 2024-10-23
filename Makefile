NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

FILES = ft_isalpha.c

FILES_O = $(FILES:.c=.o)

all  : $(NAME)

$(NAME) : $(FILES_O)
	ar -r $(NAME) $(FILES_O)

clean : 
	rm -f $(FILES_O) $(BONUS_O)


fclean : clean
	rm -f libft.a

re : fclean all