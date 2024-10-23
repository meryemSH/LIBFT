
#ifndef LIBFT_H
# define LIBFT_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int ft_isalpha(char c);
int ft_isdigit(int C);
int ft_isalnum(char c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *str);


#endif