
#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int ft_isalpha(char c);


#endif