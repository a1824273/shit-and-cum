# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tytang <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/08 15:40:57 by tytang            #+#    #+#              #
#    Updated: 2022/06/23 13:01:17 by tytang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

cc = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

FILES = ft_printf \
		ft_printnull \
		ft_printstr \
		ft_printptr \
		ft_printnum \
		ft_print_unsigned_dex \
		ft_printhex \
		ft_printpcent \
		
SRCS_DIR = sources/
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = sources/
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

