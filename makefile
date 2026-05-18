# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/18 11:00:56 by romdo-na          #+#    #+#              #
#    Updated: 2026/05/18 11:14:30 by romdo-na         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= lib_ft_printf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

INCDIR	= lib

SRCS	= ft_print_ptr.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putstr_fd.c \
		ft_putunsigned.c \
		print_arg.c \
		ft_printf.c

OBJS	= ${SRCS:.c=.o}

RM		= rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $@ $(OBJS)

%.o:%.c
			$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean: clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re