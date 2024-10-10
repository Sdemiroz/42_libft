# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdemiroez <sdemiroez@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 21:05:43 by sdemiroz          #+#    #+#              #
#    Updated: 2024/10/10 03:24:36 by sdemiroez        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalpha.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_isalnum.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c


OBJS = $(SRCS:.c=.o)

BONUS =

BONUS_OBJS = $(BONUS:.c=.o)

CC = cc
CFLAGS =  -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJS)
		ar $(ARFLAGS) $(NAME) $(OBJS) $(BONUS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
			$(RM) $(NAME) *.o

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
			ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all, clean, fclean, re, bonus
