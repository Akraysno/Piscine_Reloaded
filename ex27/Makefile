# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gauffret <gauffret@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:34:01 by gauffret          #+#    #+#              #
#    Updated: 2016/11/04 11:19:17 by gauffret         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

SRC =	display_file.c \
		ft_putchar.c \
		ft_putstr.c

OBJ	=	display_file.o \
		ft_putchar.o \
		ft_putstr.o

all :	$(NAME)

$(NAME) :
	gcc -c $(SRC)
	gcc -o $(NAME) $(SRC)

clean :
	rm -rf $(OBJ)
fclean : clean 
	rm -rf $(NAME)

re : fclean all
