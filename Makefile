# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmarti <antmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 13:38:56 by antmarti          #+#    #+#              #
#    Updated: 2020/08/14 13:39:00 by antmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 		ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJS		=		$(SRCS:.s=.o)

NA			=		nasm
NA_FLAGS	=		-f macho64
GC			=		gcc
GC_FLAGS	=		-Wall -Werror -Wextra

NAME		=		libasm.a
TEST		=		test

%.o:				%.s
							$(NA) $(NA_FLAGS) $<

all:				$(NAME)

$(NAME):			$(OBJS)
							ar rcs $(NAME) $(OBJS)
clean:
					rm -rf $(OBJS)
fclean:				clean
							rm -rf  $(NAME) $(TEST)
re:					fclean $(NAME)

test:			$(NAME)
				$(GC) $(FLAGS) -L. -lasm -o $(TEST) main.c checker.c
				./$(TEST) < Makefile
	
.PHONY:			clean fclean re
