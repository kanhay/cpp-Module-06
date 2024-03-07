# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 16:06:02 by khanhayf          #+#    #+#              #
#    Updated: 2024/02/21 19:03:06 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = ScalarConverter.hpp
SRC = main.cpp ScalarConverter.cpp
OBJ = main.o ScalarConverter.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGSCPP) $(OBJ) -o $@
	
%.o : %.cpp $(HEAD)
	$(CC) $(FLAGSCPP) -c $<

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)
	
re : fclean all