# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/18 11:00:56 by romdo-na          #+#    #+#              #
#    Updated: 2026/05/18 11:05:44 by romdo-na         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= lib_ft_printf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_print_ptr.c \
		${SRCDIR}/ft_putchar.c \
		${SRCDIR}/ft_puthex.c \
		${SRCDIR}/ft_putnbr.c \
		${SRCDIR}/ft_putstr_fd.c \
		${SRCDIR}/ft_putunsigned.c \
		${SRCDIR}/print_arg.c \
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