/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:44:50 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/10/10 19:47:32 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>

int			ft_isalpha(int a);
int			ft_isdigit(int a);
int			ft_isalnum(int a);
int			ft_isascii(int a);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(char *src, int c);
char		*ft_strnstr(const char *big, const char *small, size_t n);
size_t		ft_strlen(char *s);
size_t		ft_strlcpy(char *dest_str, const char *src_str, size_t n);
size_t		ft_strlcat(char *dest_str, char *src_str, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *str, size_t n);
void		*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void		*ft_memmove(void *dest_str, const void *src_str, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);

#endif
