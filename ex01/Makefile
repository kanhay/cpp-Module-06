# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 19:03:31 by khanhayf          #+#    #+#              #
#    Updated: 2024/02/29 14:05:15 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = Serializer.hpp Data.hpp
SRC = main.cpp Serializer.cpp
OBJ = main.o Serializer.o
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