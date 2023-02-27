# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dydumont <dydumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 14:23:57 by dydumont          #+#    #+#              #
#    Updated: 2023/02/27 14:27:34 by dydumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =

MY_OBJECTS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc

RM = rm -f

GFLAGS = -Wall -Wextra -Werror -g

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: 	${MY_OBJECTS}
			ar rcs ${NAME} ${MY_OBJECTS}


all: 		${NAME}

clean:
			${RM} ${MY_OBJECTS}
fclean:		clean
			${RM} ${NAME}

re:			fclean all
