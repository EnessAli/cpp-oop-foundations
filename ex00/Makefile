# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egermen <egermen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 22:20:47 by egermen           #+#    #+#              #
#    Updated: 2024/10/06 22:20:47 by egermen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = megaphone
SRC     = Megaphone.cpp
OBJ     = $(SRC:.cpp=.o)

RM      = rm -rf
CC      = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
