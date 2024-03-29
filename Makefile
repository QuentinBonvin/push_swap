# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 15:27:16 by qbonvin           #+#    #+#              #
#    Updated: 2022/06/09 14:19:16 by qbonvin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra
CC = gcc -g 
OBJ = ${SRCS:.c=.o}
SRCS = push_swap.c utils.c init_stack.c check_error.c split_args.c solve.c \
swap.c push.c rotate.c reverse_rotate.c algo.c algo2.c radix.c create_index.c
LIBFT = ./libft 
LIBFT_A = -L ./libft -lft

all : ${NAME}

${NAME} : ${OBJ}
	@make -C ${LIBFT}
	${CC} ${CFLAGS} -o ${NAME} ${OBJ} ${LIBFT_A}

clean :
	rm -rf ${OBJ}
	rm -rf ${NAME}
	make -C ${LIBFT} clean

fclean : clean
	rm -rf ${NAME}

re : fclean all