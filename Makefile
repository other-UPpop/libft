# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohta <rohta@student.42.jp>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 06:33:59 by rohta             #+#    #+#              #
#    Updated: 2024/05/22 15:20:48 by user             ###   ########.fr        #
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

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

ifeq ($(MAKECMDGOALS),bonus)
    OBJS = $(OBJ) $(BONUS_OBJ)
else
    OBJS = $(OBJ)
endif

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 

bonus : $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

.PHONY: all clean fclean re bonus
