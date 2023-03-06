# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 14:23:57 by dydumont          #+#    #+#              #
#    Updated: 2023/03/06 13:55:38 by dydumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCE  =  sources/moove/*.c \
		   sources/algo/*.c \
		   sources/utils/*.c \
		   sources/main.c

$(NAME):
	$(CC) $(FLAGS) $(SOURCE) -Iincludes -o $(NAME)

all: $(NAME)

clean:
	@rm -rf sources/*.o
	@rm -rf sources/moove/*.o
	@rm -rf sources/algo/*.o
	@rm -rf sources/utils/*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
