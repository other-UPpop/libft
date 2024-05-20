# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohta <rohta@student.42.jp>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 06:33:59 by rohta             #+#    #+#              #
#    Updated: 2024/05/20 14:55:22 by rohta            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	  ft_memchr.c ft_memcpy.c ft_memset.c ft_memmove.c ft_memcmp.c\
	  ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_strnstr.c ft_strrchr.c\
	  ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c\
	  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	  ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
