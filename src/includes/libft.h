/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roramos <roramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:27:18 by roramos           #+#    #+#             */
/*   Updated: 2022/11/25 17:19:26 by roramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 1
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

//ft_printf
int		ft_printf(const char *format, ...);
int		ft_print_str(char *s);
int		ft_print_chr(char c);
int		ft_print_ptr(unsigned long ptr);
int		ft_print_num(int num);
int		ft_print_unum(int unsigned num);
int		ft_print_lower_hex(int num);
int		ft_print_upper_hex(int num);
int		ft_print_percent(void);

//get_next_line
char	*get_next_line(int fd);
char	*read_first_line(int fd, char *text);
char	*get_line(char *text);
char	*clean_first_line(char *text);

//libft
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *s);
void	*ft_memset(void *b, int c, unsigned int le);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dst, void *src, unsigned int n);
void	*ft_memmove(void *dst, const void *src, unsigned int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
char	*ft_strnstr(const char *s1, const char *s2, unsigned int n);
int		ft_atoi(const char *str);
void	*ft_calloc(unsigned int count, unsigned int size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, unsigned int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
