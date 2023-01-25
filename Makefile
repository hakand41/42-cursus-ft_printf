# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdeger <hdeger@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/17 16:33:22 by hdeger           #+#    #+#              #
#    Updated: 2023/01/24 19:36:46 by hdeger           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_*.c;

OBJ = ft_*.o

all: ${NAME}

${NAME}:
	@gcc ${FLAGS} -c ${SRC}
	@ar -rcs ${NAME} ${OBJ}

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re