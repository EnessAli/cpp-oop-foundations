# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egermen <egermen@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/06 22:19:55 by egermen           #+#    #+#              #
#    Updated: 2024/10/06 22:19:56 by egermen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = phonebook
SRC     = Contact.cpp main.cpp PhoneBook.cpp 
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
