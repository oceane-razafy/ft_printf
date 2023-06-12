# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 17:21:40 by orazafy           #+#    #+#              #
#    Updated: 2023/06/11 22:17:45 by orazafy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
IFLAGS = -I$(INCDIR)

SRCDIR = srcs
OBJDIR = objs
INCDIR = include

SRCS_FILES = ft_printf.c \
			ft_printf_c.c \
			ft_printf_di.c \
			ft_printf_p.c \
			ft_printf_percent.c \
			ft_printf_s.c \
			ft_printf_u.c \
			ft_printf_utils2.c \
			ft_printf_utils.c \
			ft_printf_x.c \
			ft_printf_xmaj.c

SRCS = $(addprefix $(SRCDIR)/, $(SRCS_FILES))
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

INCS = $(INCDIR)/ft_printf.h

NAME = libftprintf.a

RMR = rm -rf
MKDIR_P = mkdir -p

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCS) | $(OBJDIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(OBJDIR):
	$(MKDIR_P) $(OBJDIR)

clean:
		$(RMR) $(OBJDIR)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

