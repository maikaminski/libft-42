# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makamins <makamins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 21:29:19 by makamins          #+#    #+#              #
#    Updated: 2t_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \024/10/17 20:16:13 by makamins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_strlen.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_putchar_fd.c  ft_putendl_fd.c ft_putnbr_fd.c \
	  ft_putstr_fd.c ft_strlcat.c ft_atoi.c ft_strlcpy.c ft_strncmp.c \
	  ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c \
	  ft_memmove.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	  ft_strnstr.c ft_calloc.c ft_strdup.c ft_strjoin.c \
	  ft_strtrim.c ft_strmapi.c ft_striteri.c

OBJS = $(SRC:%.c=%.o)
OPTION = -c -I. -o

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(FLAGS) $(OPTION) $@ $< 

clean:
	/bin/rm -f $(OBJS)
	
fclean: clean
	/bin/rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
