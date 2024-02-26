/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omougel <omougel@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:44:53 by omougel           #+#    #+#             */
/*   Updated: 2024/02/23 10:17:48 by omougel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

//# include <cstddef>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	char			**content;
	struct s_list	*next;
}	t_list;

//char
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//mem
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//str
size_t	ft_strlen(const char *s);
size_t	ft_strlen_till_c(char const *str, char c, size_t i);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_free_arr(char **arr);

//put...
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base(unsigned int u, char *base);
int		ft_printf(const char *str, ...);

//numbers
size_t	ft_max(size_t n1, size_t n2);
size_t	ft_min(size_t n1, size_t n2);
int		ft_atoi(const char *nptr);
long	ft_atol(const char *str);
char	*ft_itoa(int n);

//lst
t_list	*ft_lstnew(char **content);
void	ft_lstadd_front(t_list **lst, t_list *new_list);
size_t	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new_list);
void	ft_lstdelone(t_list *lst, void (*del)(char **));
void	ft_lstclear(t_list **lst, void (*del)(char **));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
