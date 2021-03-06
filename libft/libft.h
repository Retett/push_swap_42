/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayavorsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:01:38 by ayavorsk          #+#    #+#             */
/*   Updated: 2017/10/27 18:01:39 by ayavorsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include "ft_printf/libftprintf.h"

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;
void					ft_bzero(void *s, size_t n);
void					*ft_memccpy(void *destination, const void *source,
						int c, size_t n);
void					*ft_memchr(const void *arr, int c, size_t n);
void					*ft_memcpy(void *destination, const void *source,
						size_t n);
void					*ft_memmove(void *dest, const void *sour, size_t n);
void					*ft_memset(void *memptr, int val, size_t num);
char					*ft_strcat (char *dest, const char *s);
char					*ft_strchr(const char *string, int symbol);
char					*ft_strcpy(char *dest, const char *s);
char					*ft_strdup(const char *str);
char					*ft_strncat(char *dest, const char *s, size_t n);
char					*ft_strncpy(char *dest, const char *s, size_t num);
char					*ft_strrchr(const char *string, int symbol);
int						ft_toupper(int ch);
int						ft_tolower(int ch);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_strcmp(const char *s1, const char *s2);
int						ft_isalpha(int ch);
int						ft_isascii(int ch);
int						ft_isalnum(int ch);
int						ft_isdigit(int ch);
int						ft_isprint(int ch);
int						ft_memcmp(const void *memptr1, const void *memptr2,
						size_t num);
long					ft_atoi(const char *str);
size_t					ft_strlcat (char *s1, const char *s2, size_t len);
int						ft_strlen (const char *str);
char					*ft_strstr(const char *s1, const char *s2);
char					*ft_strnstr(const char *s1, const char *s2, size_t len);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putstr(char const *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putstr(char const *s);
void					ft_putchar_fd(char c, int fd);
void					ft_putchar(char c);
void					ft_putendl(char const *s);
void					ft_strdel(char **as);
void					ft_strclr(char *s);
void					ft_memdel(void **ap);
char					**ft_strsplit(char const *s, char c);
void					*ft_memalloc(size_t size);
char					*ft_strnew(size_t size);
char					*ft_strmap(char const *s,
						char (*f)(char));
char					*ft_strmapi(char const *s,
						char(*f) (unsigned int, char));
char					*ft_strsub(char const *s, unsigned int start,
						size_t len);
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_strtrim(char const *s);
char					*ft_itoa(int n);
void					ft_strclr(char *s);
void					ft_striter(char *s, void (*f) (char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
int						ft_strequ(char const *s1, char const *s2);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstdelone(t_list **alst,
						void (*del) (void*, size_t));
void					ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst,
						t_list *(*f)(t_list *elem));

void					ft_swap_int(int *a, int *b);
int						ft_sqrt(int nb);
void					ft_swap_ch(char *a, char *b);
void					ft_arrstr(char **str);
size_t					ft_array_size(char **array);
void					delforlist(void *cont, size_t size);

#endif
