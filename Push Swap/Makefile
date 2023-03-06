# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 14:23:57 by dydumont          #+#    #+#              #
#    Updated: 2023/03/06 12:58:23 by dydumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCE  =  sources/operations/*.c \
		   sources/sorting/*.c \
		   sources/utils/*.c \
		   sources/main.c

$(NAME):
	$(CC) $(FLAGS) $(SOURCE) -Iincludes -o $(NAME)

all: $(NAME)

clean:
	@rm -rf sources/*.o
	@rm -rf sources/operations/*.o
	@rm -rf sources/sorting/*.o
	@rm -rf sources/utils/*.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
